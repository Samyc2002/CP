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
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll isOne = false;
    for (ll i = 0; i < n; i++)
        if (a[i] == 1) {
            isOne = true;
            break;
        }

    if (!isOne)
        cout << "YES" << endl;
    else {
        unordered_set<ll> s;
        for (ll i = 0; i < n; i++) {
            if (s.find(a[i] - 1) != s.end() || s.find(a[i] + 1) != s.end()) {
                cout << "NO" << endl;
                return;
            } else
                s.insert(a[i]);
        }
        cout << "YES" << endl;
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
