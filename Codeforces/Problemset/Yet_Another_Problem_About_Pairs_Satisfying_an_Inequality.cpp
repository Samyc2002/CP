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

ll bin_search(vector<pair<ll, ll>> a, ll low, ll high, ll curr) {
    ll mid = (low + high) / 2;

    while (low <= high) {
        if (a[mid].first > a[curr].second)
            return 1 + bin_search(a, low, mid - 1, curr) +
                   bin_search(a, mid + 1, high, curr);
        else
            return bin_search(a, mid + 1, high, curr);
    }

    return 0;
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll ans = 0;
    vector<ll> goodIndices;
    for (ll i = 0; i < n; i++) {
        if (a[i] >= i + 1)
            continue;
        ans += lower_bound(all(goodIndices), a[i]) - goodIndices.begin();
        goodIndices.PB(i + 1);
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
