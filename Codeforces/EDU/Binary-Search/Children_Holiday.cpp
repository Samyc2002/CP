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

struct helper {
    ll t, z, y;
};

ll blown(helper x, int time) {
    ll result = 0;

    result += x.z * (time / (x.t * x.z + x.y));
    ll rem = time % (x.t * x.z + x.y);
    if (rem >= (x.t * x.z))
        result += x.z;
    else
        result += rem / x.t;

    return result;
}

bool good(int m, vector<helper> &h, int time) {
    ll result = 0;

    for (const auto &x : h) {
        result += blown(x, time);
    }

    return result >= m;
}

void solve() {
    ll m, n;
    cin >> m >> n;

    vector<helper> h(n);
    for (auto &x : h) {
        cin >> x.t >> x.z >> x.y;
    }

    ll l = -1;
    ll r = 2e9 + 1;

    while (r > l + 1) {
        ll mid = (l + r) / 2;
        if (good(m, h, mid)) {
            r = mid;
        } else {
            l = mid;
        }
    }

    cout << r << endl;
    for (int i = 0; i < n; i++) {
        if (i > 0)
            cout << " ";

        ll x = blown(h[i], r);
        cout << min(m, x);
        m -= min(m, x);
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
