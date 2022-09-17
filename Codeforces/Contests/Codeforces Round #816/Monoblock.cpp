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

    vector<ll> a(n + 2);
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
    }

    ll ans = 0;
    for (ll i = 1; i <= n; i++) {
        ans += (a[i] != a[i + 1]) * (n - (i + 1) + 1) * i;
    }

    while (m--) {
        ll i, k;
        cin >> i >> k;

        ans -= (a[i] != a[i - 1]) * (n - i + 1) * (i - 1);
        ans -= (a[i + 1] != a[i]) * (n - (i + 1) + 1) * i;
        a[i] = k;
        ans += (a[i] != a[i - 1]) * (n - i + 1) * (i - 1);
        ans += (a[i + 1] != a[i]) * (n - (i + 1) + 1) * i;
        cout << ans + n * (n + 1) / 2 << endl;
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
