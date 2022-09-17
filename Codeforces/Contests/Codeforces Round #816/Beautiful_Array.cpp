#include <bits/stdc++.h>
#include <numeric>

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
    ll n, k, b, s;
    cin >> n >> k >> b >> s;

    if (n == 1) {
        if (s != b * k) {
            cout << -1 << endl;
        } else {
            cout << s << endl;
        }
        return;
    }

    vector<ll> ans(n);
    ans[n - 1] = b * k;
    s -= b * k;

    if (s < 0) {
        cout << -1 << endl;
        return;
    } else if (s == 0) {
        for (ll i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    } else if (s > 0) {
        if (s >= k - 1) {
            ans[n - 1] += k - 1;
            s -= k - 1;
        } else {
            ans[n - 1] += s;
            s = 0;
        }
    }

    for (ll i = n - 2; i >= 0 && s > 0; i--) {
        if (s >= k - 1) {
            ans[i] += k - 1;
            s -= k - 1;
        } else {
            ans[i] += s;
            s = 0;
            break;
        }
    }

    if (s != 0) {
        cout << -1 << endl;
        return;
    }

    for (ll i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
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
