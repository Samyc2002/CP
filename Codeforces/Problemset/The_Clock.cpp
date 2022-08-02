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
    string s;
    cin >> s;
    ll m;
    cin >> m;

    vector<ll> a = {600, 60, 0, 10, 1};
    vector<ll> good = {0,   70,  140, 210, 280,  350,  601,  671,
                       741, 811, 881, 951, 1202, 1272, 1342, 1412};

    ll time = 0;
    for (ll i = 0; i < 5; i++) {
        time += (s[i] - '0') * a[i];
    }

    unordered_set<ll> t;
    for (ll i = 0; i < 2022; i++) {
        t.insert(time);
        time = (time + m) % 1440;
    }

    ll ans = 0;
    for (auto tx : t) {
        for (ll i = 0; i < 16; i++) {
            if (good[i] == tx) {
                ans++;
            }
        }
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
