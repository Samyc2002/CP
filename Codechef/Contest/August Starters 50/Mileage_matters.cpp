#include <bits/stdc++.h>

using namespace std;

#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.rend(), cont.rbegin()
#define PB push_back
#define PI 3.1415926535897932384626433832795
#define endl "\n"
typedef long int l;
typedef unsigned long int ul;
typedef long double ll;
typedef unsigned long long int ull;

void solve() {
    ll n, x, y, a, b;
    cin >> n >> x >> y >> a >> b;

    ll p = n * x / a;
    ll d = n * y / b;

    if (p == d) {
        cout << "ANY" << endl;
    } else if (p < d) {
        cout << "PETROL" << endl;
    } else {
        cout << "DIESEL" << endl;
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
