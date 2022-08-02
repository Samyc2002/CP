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

bool compareDescending(pair<char, ll> a, pair<char, ll> b) {
    return (a.first == b.first) ? a.second < b.second : a.first > b.first;
}

bool compareAscending(pair<char, ll> a, pair<char, ll> b) {
    return a.second < b.second;
}

void solve() {
    string s;
    cin >> s;
    ll p;
    cin >> p;
    ll n = s.length();

    ll val = 0;

    vector<pair<char, ll>> vs;
    for (ll i = 0; i < n; i++) {
        vs.PB({s[i], i + 1});
        val += (s[i] - 'a' + 1);
    }

    sort(all(vs), compareDescending);

    ll start = 0;
    while (val > p) {
        val -= (vs[start].first - 'a' + 1);
        start++;
    }

    sort(vs.begin() + start, vs.end(), compareAscending);

    for (ll i = start; i < n; i++) {
        cout << vs[i].first;
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
