#include <bits/stdc++.h>
#include <cstddef>

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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<ll, vector<ll>> m;
    for (ll i = 0; i < n; i++) {
        m[a[i]].PB(i);
    }

    vector<ll> ans(n, 0);
    vector<ll> temp;
    for (auto p : m) {
        if (p.second.size() >= k) {
            for (ll i = 1; i <= k; i++) {
                ans[p.second[i - 1]] = i;
            }
        } else {
            for (ll i = 0; i < p.second.size(); i++) {
                temp.PB(p.second[i]);
            }
        }
    }

    for (ll i = 0; i < temp.size() / k; i++) {
        for (ll j = 0; j < k; j++) {
            ans[temp[i * k + j]] = j + 1;
        }
    }

    for (ll i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
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
