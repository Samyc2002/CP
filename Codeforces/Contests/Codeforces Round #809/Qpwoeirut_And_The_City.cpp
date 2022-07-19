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

    ll floorsFront = 0;
    for (ll i = 1; i < n - 1; i += 2) {
        ll temp = max(a[i - 1], a[i + 1]) - a[i];
        floorsFront += (temp >= 0) ? temp + 1 : 0;
    }

    ll floorsBack = 0;
    for (ll i = n - 2; i >= 1; i -= 2) {
        ll temp = max(a[i - 1], a[i + 1]) - a[i];
        floorsBack += (temp >= 0) ? temp + 1 : 0;
    }

    ll oneOverlaps = min(floorsFront, floorsBack);

    floorsFront = 0;
    for (ll i = 1; i < n - 1; i += 3) {
        ll temp = max(a[i - 1], a[i + 1]) - a[i];
        floorsFront += (temp >= 0) ? temp + 1 : 0;
    }

    floorsBack = 0;
    for (ll i = n - 2; i >= 1; i -= 3) {
        ll temp = max(a[i - 1], a[i + 1]) - a[i];
        floorsBack += (temp >= 0) ? temp + 1 : 0;
    }

    ll zeroOverlaps = min(floorsFront, floorsBack);

    if (n % 3)
        cout << oneOverlaps << endl;
    else
        cout << min(zeroOverlaps, oneOverlaps) << endl;
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
