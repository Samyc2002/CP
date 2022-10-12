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

double c;

double diff(double x) { return (x * x + sqrt(x) - c); }

void solve() {
    cin >> c;

    double l = 0, r = 1e10;
    for (int i = 0; i < 100; i++) {
        double mid = (l + r) / 2;
        double val = diff(mid);

        if (val >= 0)
            r = mid;
        else
            l = mid;
    }

    cout << fixed << setprecision(15) << r << endl;
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
