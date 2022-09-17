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
    ll n, k;
    cin >> n >> k;

    if (n & 1) {
        cout << 1 << " " << (n / 2) << " " << (n / 2) << endl;
    } else if (n % 4) {
        cout << (n / 2) - 1 << " " << (n / 2) - 1 << " " << 2 << endl;
    } else {
        cout << (n / 2) << " " << (n / 4) << " " << (n / 4) << endl;
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
