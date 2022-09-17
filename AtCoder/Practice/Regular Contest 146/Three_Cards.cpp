#include <bits/stdc++.h>
#include <ratio>
#include <string>

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
    vector<vector<ll>> a(7);
    for (ll i = 0; i < n; i++) {
        ll k;
        cin >> k;

        a[(ll)log10(k)].PB(k);
    }
    vector<ll> v;

    for (ll i = 0; i < a.size(); i++) {
        for (ll j = 0; j < a[0].size(); j++) {
            v.push_back(a[i][j]);
        }
    }
    sort(a.begin(), a.end(), greater<ll>());
    vector<ll> vv;
    int j = 3;
    while (j--) {
        string s = "";
        for (int i = 0; i < 3; i++) {
            s += to_string(v[i]);
        }
        vv.push_back(stoi(s));
    }
    sort(vv.begin(), vv.end(), greater<ll>());

    // sort(all(ans), greater<string>());
    // vector<ll> p(6);

    // p[0] = stoi(ans[0] + ans[1] + ans[2]);
    // p[1] = stoi(ans[1] + ans[0] + ans[2]);
    // p[2] = stoi(ans[1] + ans[2] + ans[0]);
    // p[3] = stoi(ans[2] + ans[1] + ans[0]);
    // p[4] = stoi(ans[2] + ans[0] + ans[1]);
    // p[5] = stoi(ans[0] + ans[2] + ans[1]);

    // cout << *max_element(all(p)) << endl;
    cout << vv[0];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
