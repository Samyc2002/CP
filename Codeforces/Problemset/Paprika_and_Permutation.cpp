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
    }

    set<ll> s;
    for (ll i = 1; i <= n; i++) {
        s.insert(i);
    }

    vector<ll> notP;
    for (ll i = 0; i < n; i++)
        if (s.find(a[i]) != s.end())
            s.erase(a[i]);
        else
            notP.PB(a[i]);

    sort(all(notP));
    bool err = false;
    for (auto x : notP) {
        auto it = s.begin();
        // cout << x << *it << endl;
        if (*it > (x - 1) / 2) {
            err = true;
            break;
        }
        s.erase(it);
    }

    if (err)
        cout << -1 << endl;
    else
        cout << notP.size() << endl;
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
