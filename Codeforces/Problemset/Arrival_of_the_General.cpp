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

pair<ll, ll> max_element(vector<ll> a) {
    ll n = a.size();
    pair<ll, ll> ans;
    ll max = INT_MIN;
    for (ll i = n - 1; i >= 0; i--) {
        if (max <= a[i]) {
            max = a[i];
            ans.first = a[i];
            ans.second = i;
        }
    }
    return ans;
}

pair<ll, ll> min_element(vector<ll> a) {
    ll n = a.size();
    pair<ll, ll> ans;
    ll min = INT_MAX;
    for (ll i = 0; i < n; i++) {
        if (min >= a[i]) {
            min = a[i];
            ans.first = a[i];
            ans.second = i;
        }
    }
    return ans;
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    pair<ll, ll> mx = max_element(a);
    pair<ll, ll> mn = min_element(a);

    if (mn.second < mx.second) {
        cout << mx.second + n - (mn.second + 1) - 1;
    } else {
        cout << mx.second + n - (mn.second + 1);
    }
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
