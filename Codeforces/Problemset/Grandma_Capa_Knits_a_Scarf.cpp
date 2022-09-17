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
    ll mn = INT_MAX;
    for (char c = 'a'; c <= 'z'; c++) {
        ll k = 0, i = 0, j = n - 1;
        while (i <= j) {
            if (s[i] == s[j]) {
                i++;
                j--;
            } else if (s[i] == c) {
                i++;
                k++;
            } else if (s[j] == c) {
                j--;
                k++;
            } else {
                k = -1;
                break;
            }
        }
        if (k != -1) {
            mn = min(mn, k);
        }
    }

    cout << ((mn == INT_MAX) ? -1 : mn) << endl;
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
