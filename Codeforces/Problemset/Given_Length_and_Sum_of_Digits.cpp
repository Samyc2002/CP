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
    int m, s;
    cin >> m >> s;
    if (s == 0) {
        if (m == 1) {
            cout << "0 0" << endl;
            return;
        } else {
            cout << "-1 -1" << endl;
            return;
        }
    } else {
        string maxi;
        string mini;
        for (int i = 0; i < m; i++) {
            int k = min(9, s);
            maxi.push_back('0' + k);
            s -= k;
        }
        if (s > 0) {
            cout << "-1 -1" << endl;
            return;
        }
        for (int i = m - 1; i >= 0; i--) {
            mini.push_back(maxi[i]);
        }
        int j = 0;
        while (mini[j] == '0')
            j++;
        mini[0]++;
        mini[j]--;

        cout << mini << " " << maxi << endl;
    }
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
