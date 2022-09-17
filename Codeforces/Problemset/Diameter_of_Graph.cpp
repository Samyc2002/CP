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

    if ((n * (n - 1) >> 1) < m || m < n - 1) {
        cout << "NO" << endl;
    } else if (n == 1) {
        cout << (k > 1 ? "YES" : "NO") << endl;
    } else if (m < (n * (n - 1) >> 1)) {
        cout << (k > 3 ? "YES" : "NO") << endl;
    } else if (k > 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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
