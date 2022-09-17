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
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(all(a));
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        ll x = lower_bound(a.begin() + i + 1, a.end(), l - a[i]) -
               (a.begin() + i + 1);
        ll y = upper_bound(a.begin() + i + 1, a.end(), r - a[i]) -
               (a.begin() + i + 1);

        ans += abs(x - y) + 1;
    }

    cout << ans - n << endl;
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
