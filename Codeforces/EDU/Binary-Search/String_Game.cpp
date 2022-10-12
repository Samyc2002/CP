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

ll n;
string t, p;
vector<ll> pos;

string compute(ll j) {
    vector<ll> a;
    for (ll i = j + 1; i < n; i++) {
        a.PB(pos[i] - 1);
    }
    sort(all(a));
    string ans;
    for (ll i = 0; i < a.size(); i++) {
        ans.PB(t[a[i]]);
    }
    return ans;
}

bool good(ll k) {
    string fin = compute(k);
    ll j = 0;
    for (ll i = 0; i < fin.length(); i++) {
        if (j < p.length() && fin[i] == p[j])
            j++;
    }

    if (j < p.length())
        return false;
    return true;
}

void solve() {
    cin >> t >> p;

    n = t.length();
    pos.resize(n);
    for (ll i = 0; i < n; i++) {
        cin >> pos[i];
    }

    ll l = -1, r = n;
    while (r > l + 1) {
        ll mid = (l + r) / 2;
        if (good(mid))
            l = mid;
        else
            r = mid;
    }

    cout << l + 1 << endl;
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
