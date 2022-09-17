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

    if (n == 1) {
        cout << 1 << endl;
        return;
    }

    if (n == 2) {
        cout << -1 << endl;
        return;
    }

    vector<vector<ll>> a(n, vector<ll>(n));
    ll k = 1;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            a[j][i] = k++;
        }
    }

    for (ll i = 1; i < n; i += 2) {
        rotate(a[i].begin(), a[i].begin() + 1, a[i].end());
    }

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
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
