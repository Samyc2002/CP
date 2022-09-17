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
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }

    double l = 0;
    double r = 1e8;

    for (int i = 0; i < 100; i++) {
        double m = (l + r) / 2;
        int s = 0;
        for (int j = 0; j < n; j++) {
            s += (int)(v[j] / m);
        }
        if (s >= k) {
            l = m;
        } else {
            r = m;
        }
    }

    cout << setprecision(10) << l << endl;
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
