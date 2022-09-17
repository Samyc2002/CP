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

ll n, x, y;

bool good(ll t) {
    ll m = min(x, y);
    if (t < m)
        return false;

    t -= m;
    return 1 + (t / x) + (t / y) >= n;
}

void solve() {
    cin >> n >> x >> y;

    ll l = 0;
    ll r = 2e9 + 5;
    while (r > l + 1) {
        ll mid = (l + r) / 2;

        if (good(mid))
            r = mid;
        else
            l = mid;
    }

    cout << r << endl;
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
