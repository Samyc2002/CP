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

ll count(string s, char x) {
    ll ans = 0;
    for (ll i = 0; i < s.length(); i++) {
        if (s[i] == x) {
            ans++;
        }
    }

    return ans;
}

void solve() {
    ll n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    if (count(s, 'b') != count(t, 'b')) {
        cout << "NO" << endl;
        return;
    }

    ll j = 0;
    for (ll i = 0; i < n; i++) {
        if (s[i] == 'b') {
            continue;
        }

        while (t[j] == 'b') {
            j++;
        }

        if (s[i] != t[j] || (s[i] == 'a' && i > j) || (s[i] == 'c' && i < j)) {
            cout << "NO" << endl;
            return;
        }

        j++;
    }

    cout << "YES" << endl;
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
