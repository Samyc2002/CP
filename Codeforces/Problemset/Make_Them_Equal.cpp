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
    int n, i, co = 0;
    char c;
    cin >> n;
    cin >> c;
    string s;
    cin >> s;
    int x = 0;
    for (i = 0; i < n; i++) {
        if (s[i] == c) {
            x = i + 1;
            co++;
        }
    }
    if (co == n) {
        cout << 0 << endl;
        return;
    }
    if (x > n / 2)
        cout << "1\n" << x << endl;
    else
        cout << "2\n" << n << " " << n - 1 << endl;
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
