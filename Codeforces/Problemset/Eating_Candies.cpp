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
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<ll> prefix(n), suffix(n);
    prefix[0] = a[0];
    for (ll i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + a[i];
    }
    suffix[n - 1] = a[n - 1];
    for (ll i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + a[i];
    }

    ll i = 0, j = n - 1, ans = 0;
    while (i < j) {
        if (prefix[i] == suffix[j]) {
            ans = max(ans, i + 1 + n - j);
            i++;
            j--;
        }

        if (prefix[i] < suffix[j]) {
            i++;
        } else if (prefix[i] > suffix[j]) {
            j--;
        }
    }

    // cout << i + 1 + n - j << endl;
    // cout << i << " " << j << endl;
    cout << ans << endl;
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
