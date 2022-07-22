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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<ll> a(n);
    ll p = k;
    for (ll i = 0; i < n && p > 0; i++) {
        if ((k & 1) == (s[i] - '0')) {
            a[i] = 1;
            p--;
        }
    }

    a[n - 1] += p;
    for (ll i = 0; i < n; i++) {
        if ((k - a[i]) & 1) {
            s[i] = '1' - (s[i] - '0');
        }
    }

    cout << s << endl;
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
