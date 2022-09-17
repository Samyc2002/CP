#include <bits/stdc++.h>

using namespace std;

#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.rend(), cont.rbegin()
#define PB push_back
#define PI 3.1415926535897932384626433832795
#define endl endl
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

    map<ll, ll> m;
    ll x = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[x])
            x = i;
        m[x]++;
    }

    m[x] = INT_MAX;
    while (q--) {
        ll i, k;
        cin >> i >> k;
        i--;

        k -= max(i - 1, 0LL);
        cout << max(min(m[i], k), 0LL) << endl;
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
