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
    ll xa, ya, xb, yb, n;
    cin >> xa >> ya >> xb >> yb >> n;
    vector<pair<pair<ll, ll>, ll>> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i].first.first >> a[i].first.second >> a[i].second;
    }

    ll ans = 0;
    for (ll i = min(xa, xb); i <= max(xa, xb); i++) {
        for (ll j = min(ya, yb); j <= max(ya, yb); j++) {
            if (i == xa || i == xb || j == ya || j == yb) {
                for (ll k = 0; k < n; k++) {
                    if ((((i - a[k].first.first) * (i - a[k].first.first)) +
                         ((j - a[k].first.second) * (j - a[k].first.second))) <=
                        a[k].second * a[k].second) {
                        ans--;
                        break;
                    }
                }
                ans++;
            }
        }
    }

    cout << ans;
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
