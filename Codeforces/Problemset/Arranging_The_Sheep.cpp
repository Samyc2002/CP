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

ll compute(vector<ll> a, ll mid) {
    ll ans = 0;

    for (ll i = mid + 1; i < a.size(); i++) {
        ans += a[i] - a[i - 1] - 1;
        a[i] = a[i - 1] + 1;
    }
    for (ll i = mid - 1; i >= 0; i--) {
        ans += a[i + 1] - a[i] - 1;
        a[i] = a[i + 1] - 1;
    }

    return ans;
}

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;

    vector<ll> a;
    for (ll i = 0; i < n; i++) {
        if (s[i] == '*') {
            a.PB(i);
        }
    }

    ll ans = 0;
    if (a.size() & 1) {
        ll mid = (a.size() / 2);
        ans = compute(a, mid);
    } else {
        if (a.size() == 0) {
            cout << 0 << endl;
            return;
        }
        ll mid = (a.size() / 2);
        ans = min(compute(a, mid), compute(a, mid - 1));
    }

    cout << ans << endl;
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
