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
    vector<vector<ll>> a(n, vector<ll>(m));
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    vector<ll> b;

    for (ll i = 0; i < n && b.empty(); i++) {
        vector<ll> sorted = a[i];
        sort(all(sorted));
        for (ll j = 0; j < m; j++) {
            if (a[i][j] != sorted[j]) {
                b.PB(j);
            }
        }
    }

    if (b.size() == 0) {
        cout << "1 1" << endl;
    } else if (b.size() > 2) {
        cout << -1 << endl;
    } else {
        for (ll i = 0; i < n; i++) {
            swap(a[i][b[0]], a[i][b[1]]);
        }

        for (ll i = 0; i < n; i++) {
            for (ll j = 1; j < m; j++) {
                if (a[i][j] < a[i][j - 1]) {
                    cout << -1 << endl;
                    return;
                }
            }
        }

        cout << b[0] + 1 << " " << b[1] + 1 << " " << endl;
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
