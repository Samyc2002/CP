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
    ll n, c, q;
    cin >> n >> c >> q;
    string s;
    cin >> s;

    vector<ll> left(c + 1), right(c + 1), diff(c + 1);
    left[0] = 0;
    right[0] = n;
    for (ll i = 1; i <= c; i++) {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        left[i] = right[i - 1];
        right[i] = left[i] + (r - l + 1);
        diff[i] = left[i] - l;
    }

    while (q--) {
        ll k;
        cin >> k;
        k--;
        for (ll i = c; i >= 1; i--) {
            if (k < left[i])
                continue;
            else
                k -= diff[i];
        }

        cout << s[k] << endl;
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
