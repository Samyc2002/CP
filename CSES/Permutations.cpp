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
    vector<ll> a;
    for (ll i = 2; i <= n; i += 2) {
        a.PB(i);
    }
    for (ll i = 1; i <= n; i += 2) {
        a.PB(i);
    }

    bool ok = true;
    for (ll i = 0; i < n - 1; i++) {
        if (abs(a[i + 1] - a[i]) == 1) {
            ok = false;
            break;
        }
    }
    if (!ok) {
        cout << "NO SOLUTION";
        return;
    }
    for (ll i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
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
