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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<ll, pair<ll, ll>> m;
    for (ll i = 0; i < n; i++) {
        if (m.find(a[i]) == m.end()) {
            m[a[i]].first = i;
            m[a[i]].second = i;
        } else {
            m[a[i]].second = i;
        }
    }

    while (q--) {
        ll start, end;
        cin >> start >> end;

        if (m.find(start) == m.end() || m.find(end) == m.end() ||
            m[start].first > m[end].second)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
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
