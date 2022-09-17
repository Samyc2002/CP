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
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(all(a));
    vector<ll> b;
    for (ll i = 1; i < n; i++) {
        if (a[i] - a[i - 1] > x) {
            b.PB(a[i] - a[i - 1]);
        }
    }

    sort(all(b));
    ll sz = b.size();
    for (ll i = 0; i < b.size(); i++) {
        ll need = (b[i] / x) - (b[i] % x == 0 ? 1 : 0);
        if (k >= need) {
            sz--;
            k -= need;
        }
    }

    cout << sz + 1 << endl;
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
