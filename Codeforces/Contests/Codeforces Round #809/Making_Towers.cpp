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
    vector<vector<ll>> mp(n + 1);
    for (ll i = 1; i <= n; i++) {
        ll a;
        cin >> a;
        mp[a].PB(i);
    }

    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++) {
        vector<ll> curr = mp[i];
        if (curr.size() == 0)
            continue;

        ll size = 1;
        for (ll j = 0; j < curr.size() - 1; j++) {
            if ((curr[j + 1] - curr[j]) % 2)
                size++;
        }

        a[i] = max(a[i], size);
    }

    for (ll i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
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
