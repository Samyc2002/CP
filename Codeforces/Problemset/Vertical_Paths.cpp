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
    vector<ll> a(n + 1);
    vector<bool> leaf(n + 1, true);
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        leaf[a[i]] = false;
    }

    if (n == 1) {
        cout << 1 << endl;
        cout << 1 << endl;
        cout << 1 << endl;
        cout << endl;
        return;
    }

    vector<vector<ll>> paths;
    vector<bool> visited(n + 1);

    for (ll i = 1; i <= n; i++) {
        if (!leaf[i])
            continue;
        visited[i] = true;
        vector<ll> temp = {i};

        ll v = i;
        while (a[v] != v && !visited[a[v]]) {
            v = a[v];
            visited[v] = true;
            temp.PB(v);
        }

        paths.PB(temp);
    }

    cout << paths.size() << endl;
    for (ll i = 0; i < paths.size(); i++) {
        cout << paths[i].size() << endl;
        reverse(all(paths[i]));
        for (ll j = 0; j < paths[i].size(); j++) {
            cout << paths[i][j] << " ";
        }
        cout << endl;
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
