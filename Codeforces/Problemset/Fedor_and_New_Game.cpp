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
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(m + 1);
    for (ll i = 0; i <= m; i++) {
        cin >> a[i];
    }

    ll friends = 0;
    for (ll i = 0; i < m; i++)
        if (__builtin_popcount(a[i] ^ a[m]) <= k)
            friends++;

    cout << friends << endl;
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
