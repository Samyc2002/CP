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
    unordered_set<ll> s;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(a[i]);
    }
    sort(all(a));

    for (ll i = n - 1; i >= (n / 2) + (n & 1); i--) {
        cout << a[i] << " " << a[0] << endl;
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
