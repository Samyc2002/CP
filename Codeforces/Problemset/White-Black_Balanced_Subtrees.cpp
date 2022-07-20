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

struct Node {
    ll par, w, b;
    Node() {
        par = -1;
        w = 0;
        b = 0;
    }
};

void solve() {
    ll n;
    cin >> n;
    vector<Node> tree(n);
    for (ll i = 1; i < n; i++) {
        ll k;
        cin >> k;
        tree[i].par = k;
    }
    string colors;
    cin >> colors;
    for (ll i = 0; i < n; i++) {
        if (colors[i] == 'W')
            tree[i].w++;
        else
            tree[i].b++;
    }

    for (ll i = n - 1; i >= 1; i--) {
        ll par = tree[i].par;
        tree[par - 1].w += tree[i].w;
        tree[par - 1].b += tree[i].b;
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        if (tree[i].w == tree[i].b)
            ans++;
    }

    cout << ans << endl;
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
