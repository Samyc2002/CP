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
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (y >= x) {
        cout << ((*max_element(all(a)) + y - 1) / y) << endl;
        return;
    }

    // vector<ll> m;
    // m[0] = a[0];
    // for (ll i = 1; i < n; i++) {
    //     m[i] = max(m[i - 1], a[i]);
    // }
    // ll ans = 0;
    ll mx = 0;
    for (ll i = n - 1; i >= 0; i--) {
        ll ops = (a[i] + y - 1) / y;
        if (ops <= mx) {
            continue;
        }

        ll need = ops - mx;
        ll left = a[i] - y * mx;
        ll xOps = (left + x - 1) / x;
        ll xOp = min(xOps, need);
        ll yOp = max(mx, (a[i] - x * xOp + y - 1) / y);
        mx = max(mx, xOp + yOp);
    }

    cout << mx << endl;
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
