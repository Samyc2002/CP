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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (ll t = 0; t < n; t++) {
        ll k;
        cin >> k;
        string ops;
        cin >> ops;

        ll f = 0;
        for (ll i = 0; i < k; i++) {
            f += (ops[i] == 'D' ? 1 : -1);
        }
        a[t] = (a[t] + f) % 10;
    }

    for (ll i = 0; i < n; i++) {
        cout << (a[i] < 0 ? 10 + a[i] : a[i]) << " ";
    }
    cout << endl;
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
