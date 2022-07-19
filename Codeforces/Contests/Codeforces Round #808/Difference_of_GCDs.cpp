#include <bits/stdc++.h>

using namespace std;

#define gfoi(i, j, k, in) for (int i = j; i < k; i += in)
#define gfod(i, j, k, in) for (int i = j; i >= k; i -= in)
#define foi(i, j) gfoi(i, 0, j, 1)
#define fod(i, j) gfod(i, 0, j, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define PB push_back
#define PI 3.1415926535897932384626433832795
#define endl "\n"
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vi> vii;
typedef long int l;
typedef unsigned long int ul;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int, int> pii;
typedef map<int, int>::iterator mi;

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

ll closestMultiple(ll n, ll a) {
    if (n % a)
        return (n + (a - (n % a)));
    else
        return n;
}

void solve() {
    ll n, l, r;
    cin >> n >> l >> r;

    // if ((r - l + 1) < n) {
    //     cout << "NO" << endl;
    //     return;
    // }

    vector<ll> ans;
    for (ll i = 1; i <= n; i++) {
        ll m = closestMultiple(l, i);
        if (m > r) {
            cout << "NO" << endl;
            return;
        }

        ans.PB(m);
    }

    cout << "YES" << endl;
    for (ll i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
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
