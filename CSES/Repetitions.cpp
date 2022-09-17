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

    ll n = s.length();
    ll i = 0, j = 0, ans = 0;
    while (j < n - 1) {
        if (s[j + 1] == s[i])
            j++;
        else {
            ans = max(ans, j - i + 1);
            j++;
            i = j;
        }
    }

    cout << max(ans, j - i + 1);
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
