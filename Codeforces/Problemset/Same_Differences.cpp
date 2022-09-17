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
        a[i] -= (i + 1);
    }

    map<ll, ll> m;
    for (ll i = 0; i < n; i++) {
        m[a[i]]++;
    }

    vector<ll> k;
    for (auto p : m) {
        if (p.second > 1) {
            k.PB(p.second);
        }
    }

    for (ll i = 0; i < k.size(); i++) {
        ll x = k[i];
        k[i] = x * (x - 1) / 2;
    }

    cout << accumulate(all(k), 0LL) << endl;
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
