#include <bits/stdc++.h>
#include <iostream>

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

    bool done = false;
    if (a[0] == 1) {
        cout << n + 1 << " ";
        for (ll i = 1; i <= n; i++) {
            cout << i << " ";
        }
        cout << endl;
        return;
    } else {
        for (ll i = 0; i < n - 1; i++) {
            if (a[i] == 0 && a[i + 1] == 1) {
                for (ll j = 1; j <= i + 1; j++) {
                    cout << j << " ";
                }
                cout << n + 1 << " ";
                for (ll j = i + 2; j <= n; j++) {
                    cout << j << " ";
                }
                cout << endl;
                return;
            }
        }
    }
    for (ll i = 0; i <= n; i++) {
        cout << i + 1 << " ";
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
