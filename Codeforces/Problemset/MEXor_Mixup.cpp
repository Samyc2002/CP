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
    ll a, b;
    cin >> a >> b;
    ll rem = (a - 1) % 4;
    ll XOR = (rem == 0 ? a - 1 : rem == 1 ? 1 : rem == 2 ? a : 0);

    // if (XOR == 0) {
    //     if (b == 0) {
    //         cout << a << endl;
    //     } else {
    //         cout << a + (b == a ? 2 : 1) << endl;
    //     }
    // } else {
    if (XOR == b) {
        cout << a << endl;
    } else {
        cout << a + ((XOR ^ b) == a ? 2 : 1) << endl;
    }
    // }
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
