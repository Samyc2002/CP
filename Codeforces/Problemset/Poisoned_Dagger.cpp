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
    ll n, h;
    cin >> n >> h;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll low = 1;
    ll high = 1e18;
    while (low <= high) {
        ll mid = low + ((high - low) / 2);
        ll hp = mid;
        for (ll i = 0; i < n - 1; i++) {
            hp += min(a[i + 1] - a[i], mid);
        }

        if (hp < h)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << high + 1 << endl;
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
