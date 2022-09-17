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
    ll n, m;
    cin >> n >> m;

    ll x = max(m, n);
    ll y = min(m, n);

    string ans = "";
    for (ll i = 0; i < x % (y + 1); i++) {
        for (ll i = 0; i < (x / (y + 1)) + 1; i++) {
            ans += (n > m) ? "0" : "1";
        }
        ans += (n > m) ? "1" : "0";
    }
    for (ll i = 0; i < (y - x % (y + 1)); i++) {
        for (ll i = 0; i < (x / (y + 1)); i++) {
            ans += (n > m) ? "0" : "1";
        }
        ans += (n > m) ? "1" : "0";
    }
    for (ll i = 0; i < (x / (y + 1)); i++) {
        ans += (n > m) ? "0" : "1";
    }

    for (ll i = 0; i < ans.length() - 2; i++) {
        if (ans[i] == '0' && ans[i + 1] == '0') {
            cout << -1;
            return;
        }
        if (ans[i] == '1' && ans[i + 1] == '1' && ans[i + 2] == '1') {
            cout << -1;
            return;
        }
    }

    cout << ans;
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
