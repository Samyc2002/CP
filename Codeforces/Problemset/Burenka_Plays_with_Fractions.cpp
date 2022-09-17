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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == 0 && c == 0) {
        cout << 0 << endl;
        return;
    } else if (a == 0 || c == 0) {
        cout << 1 << endl;
        return;
    }

    ll x = a * d;
    ll y = c * b;

    ll p = __gcd(x, y);
    x /= p;
    y /= p;

    if (x == y) {
        cout << 0 << endl;
        return;
    }
    cout << (x != 1) + (y != 1) << endl;
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
