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
    ll xmax = 0, ymax = 0, xmin = INT_MAX, ymin = INT_MAX;
    for (ll i = 0; i < n; i++) {
        ll x, y;
        cin >> x >> y;
        xmax = max(xmax, x);
        ymax = max(ymax, y);
        xmin = min(xmin, x);
        ymin = min(ymin, y);
    }

    cout << (xmax - xmin) + (ymax - ymin) + abs(ymax) + abs(ymin) + abs(xmax) +
                abs(xmin)
         << endl;
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
