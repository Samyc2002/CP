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
    string s, p;
    cin >> s >> p;

    ll n = p.length(), m = s.length();
    vector<ll> a(26), b(26);
    for (ll i = 0; i < n; i++) {
        a[p[i] - 'a']++;
    }

    ll ans = 0;
    for (ll i = 0; i < m; i++) {
        if (s[i] != '?')
            b[s[i] - 'a']++;

        if (i >= n - 1) {
            ans++;
            for (ll j = 0; j < 26; j++) {
                if (b[j] > a[j]) {
                    ans--;
                    break;
                }
            }

            if (s[i - n + 1] != '?')
                b[s[i - n + 1] - 'a']--;
        }
    }

    cout << ans;
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
