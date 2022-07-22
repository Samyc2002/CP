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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<ll> p(n), s(n);
    p[0] = 0;
    for (ll i = 1; i < n; i++) {
        ll f = max(0LL, a[i - 1] - a[i]);
        p[i] = f + p[i - 1];
    }
    s[n - 1] = 0;
    for (ll i = n - 2; i >= 0; i--) {
        ll f = max(0LL, a[i + 1] - a[i]);
        s[i] = f + s[i + 1];
    }
    // for (ll i = 0; i < n; i++) {
    //     cout << p[i] << " " << s[i] << endl;
    // }

    while (m--) {
        ll u, v;
        cin >> u >> v;
        u--;
        v--;
        if (u > v) {
            cout << s[v] - s[u] << endl;
        } else {
            cout << p[v] - p[u] << endl;
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
