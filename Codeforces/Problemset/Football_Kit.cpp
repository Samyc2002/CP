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
    vector<pair<ll, ll>> a(n);
    unordered_map<ll, ll> m;
    for (ll i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
        m[a[i].first]++;
    }

    vector<pair<ll, ll>> ans(n, {n - 1, 0});
    for (ll i = 0; i < n; i++) {
        ans[i].first += m[a[i].second];
        ans[i].second += n - m[a[i].second] - 1;
    }

    for (ll i = 0; i < n; i++) {
        cout << ans[i].first << " " << ans[i].second << endl;
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
