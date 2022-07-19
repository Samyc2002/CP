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

int closestMultiple(int n) {
    int x = 2;
    if (x > n)
        return x;

    n = n + x / 2;
    n = n - (n % x);
    return n;
}

void solve() {
    int n;
    cin >> n;
    vi a(n);
    foi(i, n) cin >> a[i];

    int k = n, b = 0;
    while (k) {
        k /= 2;
        b++;
    }

    int offset = closestMultiple(n);
    if (offset == n)
        offset /= 2;
    ll sum = 0;
    vector<ll> ans;
    foi(i, n - 1) {
        if (i == offset || i + offset > n - 1)
            offset /= 2;

        a[i + offset] += a[i];
        sum += a[i];
        ans.PB(sum);
    }

    foi(i, n - 1) cout << ans[i] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
