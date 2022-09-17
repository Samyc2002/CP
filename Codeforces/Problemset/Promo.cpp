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
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(all(a));
    vector<ll> prefix(n + 1);
    for (ll i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + a[i];
    }

    while (q--) {
        ll x, y;
        cin >> x >> y;

        ll sum = prefix[n - x + y] - prefix[n - x];
        cout << sum << endl;
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