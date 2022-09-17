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
    string s;
    cin >> n >> s;

    string t = s;
    sort(all(t));

    ll count = 0;
    vector<ll> ind;
    for (ll i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            count++;
            ind.PB(i + 1);
        }
    }

    cout << (count == 0 ? 0 : 1) << endl;
    if (count) {
        cout << count << " ";
        for (ll i = 0; i < ind.size(); i++) {
            cout << ind[i] << " ";
        }
        cout << endl;
    }
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
