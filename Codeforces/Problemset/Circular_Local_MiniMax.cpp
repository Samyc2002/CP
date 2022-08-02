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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n & 1) {
        cout << "NO" << endl;
        return;
    }

    sort(all(a));
    if (a[0] == a[n - 1]) {
        cout << "NO" << endl;
        return;
    }

    vector<ll> ans;
    for (ll i = 0; i < n / 2; i++) {
        ans.PB(a[i]);
        ans.PB(a[(n / 2) + i]);

        if (a[i] == a[(n / 2) + i] || (a[i] == a[(n / 2) + i - 1] && i > 0)) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    for (ll i = 0; i < n; i++) {
        cout << ans[i] << " ";
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
