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

    set<ll> s;
    while (q--) {
        ll a, b, c;
        cin >> a >> b >> c;
        s.insert(b);
    }

    ll root = 0;
    for (ll i = 1; i <= n; i++) {
        if (s.find(i) == s.end()) {
            root = i;
            break;
        }
    }

    for (ll i = 1; i <= n; i++) {
        if (i != root) {
            cout << root << " " << i << endl;
        }
    }
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
