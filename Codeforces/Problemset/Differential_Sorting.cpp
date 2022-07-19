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

    if (a[n - 2] > a[n - 1])
        cout << -1 << endl;
    else {
        if (a[n - 1] < 0) {
            if (is_sorted(all(a)))
                cout << 0 << endl;
            else
                cout << -1 << endl;
        } else {
            cout << n - 2 << endl;
            for (ll i = 0; i < n - 2; i++) {
                cout << i + 1 << " " << n - 1 << " " << n << endl;
            }
        }
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
