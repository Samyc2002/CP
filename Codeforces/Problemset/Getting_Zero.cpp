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

const ll M = 32768;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        ll k;
        cin >> k;
        ll ans = 15;
        for (ll j = 0; j < 16; j++) {
            for (ll p = 0; p < 16; p++) {
                if ((k + j) * (ll)pow(2LL, p) % M == 0)
                    ans = min(ans, j + p);
            }
        }
        a[i] = ans;
    }

    for (ll i = 0; i < n; i++) {
        cout << a[i] << " ";
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
