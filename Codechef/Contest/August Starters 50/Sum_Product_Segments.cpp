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
    ll x, y;
    cin >> x >> y;

    bool ok = false;
    for (ll i = 1; i * i <= y; i++) {
        if (y % i == 0) {
            ll a = min(i, y / i);
            ll b = max(i, y / i);
            ll c = a - 1;
            ll d = x - c;

            if (d <= c) {
                if (d < 0) {
                    c = x;
                    d = 0;
                }

                cout << a << " " << b << endl;
                cout << min(c, d) << " " << max(c, d) << endl;
                ok = true;
                break;
            }

            c = b + 1;
            d = x - c;
            if (d > b) {
                cout << a << " " << b << endl;
                cout << min(c, d) << " " << max(c, d) << endl;
                ok = true;
                break;
            }

            if (ok) {
                break;
            }
        }

        if (ok) {
            break;
        }
    }

    if (!ok) {
        cout << -1 << endl;
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
