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
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m, 0));
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    vector<vector<ll>> ans(n, vector<ll>(m, 1));
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            if (a[i][j] == 0) {
                for (ll k = 0; k < n; k++) {
                    ans[k][j] = 0;
                }
                for (ll k = 0; k < m; k++) {
                    ans[i][k] = 0;
                }
            }
        }
    }

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            ll OR = 0;
            for (ll k = 0; k < n; k++) {
                OR |= ans[k][j];
            }
            for (ll k = 0; k < m; k++) {
                OR |= ans[i][k];
            }
            if (OR != a[i][j]) {
                cout << "NO";
                return;
            }
        }
    }

    cout << "YES" << endl;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
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
