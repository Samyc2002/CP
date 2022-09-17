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
    string s, t;
    cin >> s >> t;

    ll n = s.length(), m = t.length();
    vector<ll> a(26);
    bool automation = false;
    for (ll i = 0, j = 0; i < n; i++) {
        if (j < m && s[i] == t[j])
            j++;

        if (j == m)
            automation = true;
    }

    for (ll i = 0; i < n; i++)
        a[s[i] - 'a']++;
    for (ll i = 0; i < m; i++)
        a[t[i] - 'a']--;

    bool array = true;
    bool both = true;
    for (ll i = 0; i < 26; i++) {
        array &= (a[i] == 0);
        both &= (a[i] >= 0);
    }

    if (automation)
        cout << "automaton";
    else if (array)
        cout << "array";
    else if (both)
        cout << "both";
    else
        cout << "need tree";
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
