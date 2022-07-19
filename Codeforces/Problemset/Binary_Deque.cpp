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

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

ll query(int l, int r, vector<ll> &p) { return p[r] - (l ? p[l - 1] : 0); }

void solve() {
    int n, s;
    cin >> n >> s;
    vector<ll> a(n), p(n);
    foi(i, n) {
        cin >> a[i];
        p[i] = a[i];
        if (i)
            p[i] += p[i - 1];
    }

    int ans = INT_MAX;

    for (int i = 0; i < n; ++i) {
        int l = i, r = n - 1, pos = -1;
        while (l <= r) {
            int mid = (l + r) >> 1;
            if (query(i, mid, p) <= s) {
                pos = mid;
                l = mid + 1;
            } else
                r = mid - 1;
        }
        if (pos == -1 || query(i, pos, p) != s)
            continue;
        ans = min(ans, n - (pos - i + 1));
    }

    cout << (ans == INT_MAX ? -1 : ans) << "\n";
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
