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
    ll a, s;
    cin >> a >> s;

    string b = "";
    bool ok = true;
    while (a && s) {
        ll x = a % 10;
        ll y = s % 10;

        if (y < x)
            y = s % 100;
        if (y < x || y - x > 9)
            ok = false;

        b.PB('0' + (y - x));
        a /= 10;
        s /= (y / 10 ? 100 : 10);
    }

    if (a != 0)
        ok = false;

    while (s) {
        b.PB('0' + (s % 10));
        s /= 10;
    }

    if (!ok) {
        cout << -1 << endl;
        return;
    }

    ll ans = 0;
    for (ll i = b.length() - 1; i >= 0; i--) {
        ans *= 10;
        ans += (b[i] - '0');
    }

    cout << ans << endl;
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
