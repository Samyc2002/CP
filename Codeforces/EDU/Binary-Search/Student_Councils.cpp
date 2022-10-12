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

ll k, n;
vector<ll> a;

bool good(ll x) {
    ll s = 0;
    for (ll i = 0; i < n; i++) {
        s += min(x, a[i]);
    }
    return s >= x * k;
}

void solve() {
    cin >> k >> n;
    a.resize(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll l = 0, r = 1e17;
    while (r > l + 1) {
        ll mid = (l + r) / 2;
        if (good(mid))
            l = mid;
        else
            r = mid;
    }

    cout << l << endl;
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
