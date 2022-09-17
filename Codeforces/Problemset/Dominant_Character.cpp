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
    string s;
    cin >> s;

    ll sz = 1e9;
    for (ll i = 0; i < n; i++) {
        vector<ll> a(3);
        a[s[i] - 'a']++;
        for (ll j = i + 1; j < min(n, i + 7); j++) {
            a[s[j] - 'a']++;
            if (a[0] > a[1] && a[0] > a[2]) {
                sz = min(sz, j - i + 1);
            }
        }
    }

    if (sz == 1e9)
        sz = -1;

    cout << sz << endl;
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
