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

    map<int, int> m;
    vector<pair<int, int>> v;
    long long f[111111];
    for (ll i = 0; i < n; i++) {
        ll k;
        cin >> k;
        m[k]++;
    }

    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
        v.push_back(make_pair(it->first, it->second));
    }
    for (int i = 0; i < (int)v.size(); i++) {
        int pr = i - 1;
        while (pr >= 0 && v[pr].first + 1 == v[i].first)
            pr--;
        if (pr == -1)
            f[i] = 1LL * v[i].first * v[i].second;
        else
            f[i] = f[pr] + 1LL * v[i].first * v[i].second;
        if (i != 0)
            f[i] = max(f[i], f[i - 1]);
    }
    cout << f[(int)v.size() - 1] << '\n';
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
