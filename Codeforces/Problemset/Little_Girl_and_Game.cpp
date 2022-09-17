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
    string s;
    cin >> s;
    vector<ll> a(26);

    ll n = s.length();
    for (ll i = 0; i < n; i++) {
        a[s[i] - 'a']++;
    }

    ll co = 0;
    for (ll i = 0; i < 26; i++)
        if (a[i] & 1)
            co++;

    if (co == 0) {
        cout << "First" << endl;
        return;
    }
    if (co == 1) {
        cout << "First" << endl;
        return;
    }
    if (!(co & 1)) {
        cout << "Second" << endl;
        return;
    }
    cout << "First" << endl;
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
