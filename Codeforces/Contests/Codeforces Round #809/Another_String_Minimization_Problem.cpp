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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    string s = string(m, 'B');
    for (ll i = 0; i < n; i++) {
        if (a[i] < m + 1 - a[i]) {
            if (s[a[i] - 1] != 'A')
                s[a[i] - 1] = 'A';
            else
                s[m - a[i]] = 'A';
        } else {
            if (s[m - a[i]] != 'A')
                s[m - a[i]] = 'A';
            else
                s[a[i] - 1] = 'A';
        }
    }
    cout << s << endl;
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
