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
    int n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        sum += a[i];
    }

    if ((2 * sum) % n) {
        cout << 0 << endl;
        return;
    }

    unordered_map<ll, ll> m;
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        ans += m[(2 * sum / n) - a[i]];
        m[a[i]]++;
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
