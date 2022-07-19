#include <bits/stdc++.h>

using namespace std;

#define gfoi(i, j, k, in) for (int i = j; i < k; i += in)
#define gfod(i, j, k, in) for (int i = j; i >= k; i -= in)
#define foi(i, j) gfoi(i, 0, j, 1)
#define fod(i, j) gfod(i, 0, j, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define PB push_back
#define PI 3.1415926535897932384626433832795
#define endl "\n"
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vi> vii;
typedef long int l;
typedef unsigned long int ul;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int, int> pii;
typedef map<int, int>::iterator mi;

ll getClosest(ll val1, ll val2, ll target) {
    if (target - val1 >= val2 - target)
        return val2;
    else
        return val1;
}

ll findClosest(vector<ll> arr, ll target) {
    ll n = arr.size();
    // Corner cases
    if (target <= arr[0])
        return arr[0];
    if (target >= arr[n - 1])
        return arr[n - 1];

    // Doing binary search
    ll i = 0, j = n, mid = 0;
    while (i < j) {
        mid = (i + j) / 2;

        if (arr[mid] == target)
            return arr[mid];

        /* If target is less than array element,
            then search in left */
        if (target < arr[mid]) {

            // If target is greater than previous
            // to mid, return closest of two
            if (mid > 0 && target > arr[mid - 1])
                return getClosest(arr[mid - 1], arr[mid], target);

            /* Repeat for left half */
            j = mid;
        }

        // If target is greater than mid
        else {
            if (mid < n - 1 && target < arr[mid + 1])
                return getClosest(arr[mid], arr[mid + 1], target);
            // update i
            i = mid + 1;
        }
    }

    // Only single element left after search
    return arr[mid];
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void solve() {
    ll n, c, q;
    cin >> n >> c >> q;
    string s;
    cin >> s;

    vector<ll> lens(c + 1);
    lens[0] = n;
    foi(i, c) {
        ll l, r;
        cin >> l >> r;

        lens[i + 1] = lens[i] + (r - l + 1);
    }

    while (q--) {
        ll x;
        cin >> x;

        for (ll i = c; i > 0; i--) {
            if (x > lens[i - 1])
                x -= (lens[i] - lens[i - 1]);
        }

        cout << s[x - 1] << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
