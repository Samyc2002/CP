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

long long get(int x) { return x * 1ll * (x + 1) / 2; }

void solve() {
    int k;
    long long x;
    cin >> k >> x;
    long long l = 1, r = 2 * k - 1;
    long long res = 2 * k - 1;
    bool over = false;
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (mid >= k) {
            over = (get(k) + get(k - 1) - get(2 * k - 1 - mid) >= x);
        } else {
            over = (get(mid) >= x);
        }
        if (over) {
            res = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << res << endl;
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
