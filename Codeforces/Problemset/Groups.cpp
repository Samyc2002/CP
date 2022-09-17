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
    ll n;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll>(5));
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < 5; j++) {
            cin >> a[i][j];
        }
    }

    for (ll i = 0; i < 5; i++) {
        for (ll j = 0; j < 5; j++) {
            if (j == i)
                continue;

            ll both = 0, x = 0, y = 0, none = 0;
            for (ll k = 0; k < n; k++) {
                if (a[k][i] && a[k][j])
                    both++;
                else if (a[k][i])
                    x++;
                else if (a[k][j])
                    y++;
                else
                    none++;
            }

            x += both;
            y += both;

            if (none > 0 || x < n / 2 || y < n / 2) {
                continue;
            } else {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
