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
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> a(m);
    map<pair<ll, ll>, ll> mp;
    for (ll i = 0; i < m; i++) {
        ll u, v;
        cin >> u >> v;
        mp[{u, v}] = i + 1;
        a[i] = {v, u};
    }

    sort(all(a));
    vector<pair<ll, ll>> selected(2 * n);
    ll totalWeight = 0;
    for (ll i = 0; i < 2 * n; i++) {
        ll u = a[i].first;
        ll v = a[i].second;
        selected[i] = {v, u};
        totalWeight += u;
    }

    sort(all(selected));
    cout << totalWeight << endl;
    for (ll i = 0; i < n; i++) {
        cout << mp[selected[i]] << " " << mp[selected[2 * n - i - 1]] << endl;
    }
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
