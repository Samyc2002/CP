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

string st;
ll b = 0, s = 0, c = 0;
ll nb, ns, nc, pb, ps, pc, r;

bool good(ll x) {
    return pb * max(x * b - nb, 0LL) + ps * max(x * s - ns, 0LL) +
               pc * max(x * c - nc, 0LL) <=
           r;
}

void solve() {
    cin >> st >> nb >> ns >> nc >> pb >> ps >> pc >> r;

    for (ll i = 0; i < st.length(); i++) {
        b += st[i] == 'B';
        s += st[i] == 'S';
        c += st[i] == 'C';
    }

    ll l = 0, r = 1e15;
    while (r > l + 1) {
        ll mid = (l + r) / 2;
        if (good(mid))
            l = mid;
        else
            r = mid;
    }

    cout << l << endl;
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
