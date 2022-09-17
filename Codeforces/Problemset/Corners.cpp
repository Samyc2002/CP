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
    ll n, m, s = 0;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    for (ll i = 0; i < n; i++) {
        string str;
        cin >> str;
        for (ll j = 0; j < m; j++) {
            a[i][j] = str[j] - '0';
            s += a[i][j];
        }
    }

    ll mn = INT_MAX;
    for (ll i = 0; i < n - 1; i++) {
        for (ll j = 0; j < m - 1; j++) {
            ll sum = a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1];
            mn = min(mn, max(1LL, sum - 1));
        }
    }

    if (s == 0)
        cout << 0 << endl;
    else
        cout << 1 + s - mn << endl;
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
