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
    vector<ll> a(3);
    for (ll i = 0; i < 3; i++) {
        cin >> a[i];
    }
    sort(all(a));
    cout << min(((a[0] + a[1] + a[2]) / 3),
                (a[0] + a[1] + a[2]) - *max_element(all(a)));
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
