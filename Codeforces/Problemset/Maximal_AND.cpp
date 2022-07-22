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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(31);
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        for (ll j = 30; j >= 0; j--) {
            if (x & (1 << j))
                a[j]++;
        }
    }

    ll ans = 0;
    for (ll i = 30; i >= 0; i--) {
        ll need = n - a[i];
        if (need <= k) {
            k -= need;
            ans += (1 << i);
        }
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
