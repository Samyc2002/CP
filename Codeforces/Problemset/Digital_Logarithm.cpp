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
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++) {
        cin >> b[i];
    }

    priority_queue<int> p(all(a)), q(all(b));
    ll ans = 0;
    while (!p.empty()) {
        ll x = p.top(), y = q.top();
        if (x == y) {
            p.pop();
            q.pop();
            continue;
        }
        if (x > y) {
            p.pop();
            p.push(to_string(x).size());
        } else {
            q.pop();
            q.push(to_string(y).size());
        }
        ans++;
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
