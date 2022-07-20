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
    ll n, a, b;
    cin >> n >> a >> b;

    if (abs(a - b) > 1 || a + b > n - 2) {
        cout << -1 << endl;
        return;
    }

    ll l = 1, r = n;
    for (ll i = 1; i <= a + b; i++) {
        cout << (((a < b) + i) & 1 ? l++ : r--) << " ";
    }

    while (l <= r) {
        cout << ((a <= b) ? l++ : r--) << " ";
    }

    cout << endl;
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
