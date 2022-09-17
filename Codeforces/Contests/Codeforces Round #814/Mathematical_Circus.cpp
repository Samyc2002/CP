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

    vector<pair<ll, ll>> v;
    for (ll i = 1; i <= n; i += 2) {
        ll a = i;
        ll b = i + 1;
        if ((b * (a + k)) % 4 == 0) {
            v.PB({a, b});
        } else if ((a * (b + k)) % 4 == 0) {
            v.PB({b, a});
        } else {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    for (ll i = 0; i < n / 2; i++) {
        cout << v[i].first << " " << v[i].second << endl;
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
