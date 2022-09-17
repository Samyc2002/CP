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
    string t;
    cin >> t;

    ll lcm = s.length() * t.length() / __gcd(s.length(), t.length());

    string sAns = s;
    string tAns = t;
    ll sL = (lcm / s.length());
    ll tL = (lcm / t.length());
    while (sL - 1) {
        sAns.append(s);
        sL--;
    }
    while (tL - 1) {
        tAns.append(t);
        tL--;
    }

    if (sAns == tAns) {
        cout << sAns << endl;
    } else {
        cout << -1 << endl;
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
