#include <bits/stdc++.h>

using namespace std;

#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.rend(), cont.rbegin()
#define PB push_back
#define PI 3.1415926535897932384626433832795
#define endl "\n"
typedef long int l;
typedef unsigned long int ul;
typedef long long int ll;
typedef unsigned long long int ull;

void solve() {
    ll n, q;
    cin >> n >> q;
    set<ll> rows, cols;
    vector<ll> r(n + 1), c(n + 1);
    for (ll i = 1; i <= n; i++) {
        rows.insert(i);
        cols.insert(i);
    }

    while (q--) {
        ll t;
        cin >> t;

        if (t == 1) {
            ll x, y;
            cin >> x >> y;
            r[x]++;
            c[y]++;
            if (r[x] == 1)
                rows.erase(x);
            if (c[y] == 1)
                cols.erase(y);
        } else if (t == 2) {
            ll x, y;
            cin >> x >> y;
            r[x]--;
            c[y]--;
            if (r[x] == 0)
                rows.insert(x);
            if (c[y] == 0)
                cols.insert(y);
        } else if (t == 3) {
            ll x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;

            bool valid_row = (*rows.lower_bound(x1) > x2);
            bool valid_col = (*cols.lower_bound(y1) > y2);

            if (valid_row || valid_col) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
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
