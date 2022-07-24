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

bool check(string s) {
    ll count = 0;
    for (char c : s) {
        if (c == '(')
            count++;
        if (c == ')')
            count--;
        if (count < 0)
            return false;
    }

    return count == 0;
}

void solve() {
    string s;
    cin >> s;

    ll n = s.length();
    ll o = n / 2, c = n / 2;
    vector<ll> pos;

    for (ll i = 0; i < n; i++) {
        if (s[i] == '?')
            pos.PB(i);
        if (s[i] == '(')
            o--;
        if (s[i] == ')')
            c--;
    }

    for (ll i = 0; i < pos.size(); i++)
        s[pos[i]] = (i < o) ? '(' : ')';

    bool ok = true;
    if (o > 0 && c > 0) {
        swap(s[pos[o - 1]], s[pos[o]]);
        if (check(s))
            ok = false;
    }

    cout << (ok ? "YES" : "NO") << endl;
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
