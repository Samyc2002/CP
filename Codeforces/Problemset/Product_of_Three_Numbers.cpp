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
    cin >> n;
    set<int> used;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0 && !used.count(i)) {
            used.insert(i);
            n /= i;
            break;
        }
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0 && !used.count(i)) {
            used.insert(i);
            n /= i;
            break;
        }
    }
    if (int(used.size()) < 2 || used.count(n) || n == 1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        used.insert(n);
        for (auto it : used)
            cout << it << " ";
        cout << endl;
    }
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
