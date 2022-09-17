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

ll digiLog(ll n) { return 1 + log10(n); }

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++) {
        cin >> b[i];
    }

    map<ll, set<ll>> m;
    for (ll i = 0; i < n; i++) {
        m[digiLog(b[i])].insert(b[i]);
    }

    set<ll> e;
    vector<pair<ll, ll>> fin;
    for (ll i = 0; i < n; i++) {
        if (m[digiLog(a[i])].find(a[i]) != m[digiLog(a[i])].end()) {
            fin.PB({a[i], a[i]});
            m[digiLog(a[i])].erase(a[i]);
            if (m[digiLog(a[i])].size() == 0)
                m.erase(digiLog(a[i]));
        } else if (m[digiLog(digiLog(a[i]))].find(digiLog(a[i])) !=
                   m[digiLog(digiLog(a[i]))].end()) {
            fin.PB({a[i], digiLog(a[i])});
            m[digiLog(digiLog(a[i]))].erase(digiLog(a[i]));
            if (m[digiLog(digiLog(a[i]))].size() == 0)
                m.erase(digiLog(digiLog(a[i])));
        } else {
            e.insert(a[i]);
        }
    }

    for (auto p : m) {
        for (auto x : p.second) {
            if (e.find(p.first) != e.end()) {
                fin.PB({p.first, x});
                e.erase(p.first);
                m[p.first].erase(x);
            }
        }
    }

    for (auto p : m) {
        for (auto x : p.second) {
            pair<ll, ll> q = {x, *e.begin()};
            fin.PB(q);
            e.erase(q.second);
            m[p.first].erase(x);
        }
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        auto [x, y] = fin[i];
        if (x != y) {
            if (digiLog(x) == y || digiLog(y) == x)
                ans++;
            else if (digiLog(x) == digiLog(y))
                ans += (x == y == 1 ? 0 : 2);
            else {
                ans += (x == 1 ? 0 : (digiLog(x) == 1 ? 1 : 2));
                ans += (y == 1 ? 0 : (digiLog(y) == 1 ? 1 : 2));
            }
        }
    }
    // cout << ans << endl;
    for (ll i = 0; i < n; i++) {
        cout << fin[i].first << " " << fin[i].second << endl;
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
