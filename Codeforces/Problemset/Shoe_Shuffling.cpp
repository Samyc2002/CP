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

void right_shift(vector<ll> &x) {
    ll n = x.size();
    ll p = x[n - 1];
    for (ll i = n - 1; i >= 1; i--) {
        x[i] = x[i - 1];
    }
    x[0] = p;
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<ll, vector<ll>> m;
    for (ll i = 0; i < n; i++) {
        m[a[i]].PB(i);
    }

    for (auto p : m) {
        vector<ll> x = p.second;
        right_shift(x);
        m[p.first] = x;
    }

    vector<ll> final;
    for (auto p : m) {
        vector<ll> x = p.second;
        for (ll i = 0; i < x.size(); i++) {
            final.PB(x[i]);
        }
    }

    for (ll i = 0; i < n; i++) {
        if (final[i] == i) {
            cout << -1 << endl;
            return;
        }
    }

    for (ll i = 0; i < n; i++) {
        cout << final[i] + 1 << " ";
    }
    cout << endl;
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
