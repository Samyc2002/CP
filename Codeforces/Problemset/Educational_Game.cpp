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
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
    }

    ll x = 0;
    for (ll i = 1; i < n; i++) {
        ll t = log2(n - i);
        ll r = i + (1 << t);
        x += a[i];
        cout << x << endl;
        a[r] += a[i];
        a[i] = 0;
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
