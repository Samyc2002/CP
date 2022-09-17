#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define pb push_back
#define loop(a) for (int i = 0; i < a; i++)
#define loopv(i, a) for (int i = 0; i < a; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define goog(tno) cout << "Case #" << tno << ": "
#define fast_io                                                                \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(NULL)

bool good(ll w, ll h, ll n, ll m) { return (m / w) * (m / h) >= n; }

int main(void) {
    ll w, h, n;

    cin >> w >> h >> n;
    ll l = 0, r = 1;
    while (!good(w, h, n, r)) {
        r *= 2;
    }

    while (r > l + 1) {
        ll m = (l + r) / 2;
        if (good(w, h, n, m)) {
            r = m;
        } else {
            l = m;
        }
    }

    cout << r << endl;

    return 0;
}
