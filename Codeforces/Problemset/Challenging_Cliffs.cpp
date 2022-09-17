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

    sort(all(a));
    if (n == 2) {
        cout << a[0] << " " << a[1] << endl;
        return;
    }

    vector<ll> diffs(n - 1);
    for (ll i = 1; i < n; i++) {
        diffs[i - 1] = a[i] - a[i - 1];
    }

    ll rotations = min_element(all(diffs)) - diffs.begin() + 1;
    rotate(a.begin(), a.begin() + rotations, a.end());

    for (ll i = 0; i < n; i++) {
        cout << a[i] << " ";
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
