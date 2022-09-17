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
    vector<ll> a(n);
    map<ll, ll> m;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        m[a[i]]++;
    }

    priority_queue<ll> q;
    for (auto p : m) {
        q.push(p.second);
    }

    ll ans = n;
    while (q.size() >= 2) {
        ll a = q.top();
        q.pop();
        ll b = q.top();
        q.pop();

        a--;
        b--;
        ans -= 2;
        if (a) {
            q.push(a);
        }
        if (b) {
            q.push(b);
        }
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
