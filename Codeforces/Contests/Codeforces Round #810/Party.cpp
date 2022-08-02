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
    vector<ll> x(m + 1), y(m + 1), a(n + 1), degree(n + 1);
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        degree[i] = 0;
    }
    for (ll i = 1; i <= m; i++) {
        cin >> x[i] >> y[i];
        degree[x[i]]++;
        degree[y[i]]++;
    }

    ll ans = INT_MAX;
    if (m & 1) {
        for (ll i = 1; i <= n; i++) {
            if (degree[i] & 1) {
                ans = min(ans, a[i]);
            }
        }
        for (ll i = 1; i <= m; i++) {
            if (!(degree[x[i]] & 1) && !(degree[y[i]] & 1)) {
                ans = min(ans, a[x[i]] + a[y[i]]);
            }
        }
    } else {
        ans = 0;
    }

    cout << ans << endl;
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
