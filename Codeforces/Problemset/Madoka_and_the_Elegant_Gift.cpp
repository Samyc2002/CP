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

bool isValid(ll i, ll j, ll n, ll m) {
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            char ch;
            cin >> ch;
            a[i][j] = ch - '0';
        }
    }

    for (ll i = 0; i < n - 1; i++) {
        for (ll j = 0; j < m - 1; j++) {
            ll sum = a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1];
            if (sum == 3) {
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
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
