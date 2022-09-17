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
    int n;
    string s;
    cin >> n >> s;
    set<string> se;
    for (int i = 0; i < n; i++) {
        string ss;
        for (int k = 0; k < 5 && i + k < n; k++) {
            ss.push_back(s[i + k]);
            se.insert(ss);
        }
    }

    for (int len = 1; len < 6; len++) {
        string t(len, 'a');
        while (true) {
            if (se.count(t) == 0) {
                cout << t << '\n';
                return;
            }
            int idx = len - 1;
            while (idx >= 0 && t[idx] == 'z') {
                t[idx] = 'a';
                idx--;
            }
            if (idx < 0)
                break;
            t[idx]++;
        }
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
