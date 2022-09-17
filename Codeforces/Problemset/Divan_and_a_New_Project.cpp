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
    int n;
    cin >> n;
    vector<pair<int, int>> ord;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        ord.push_back({a, i});
    }
    sort(ord.rbegin(), ord.rend());

    long long sum = 0;
    vector<int> ans(n + 1, 0);
    for (int i = 0; i < n; i++) {
        int cur = 1 + i / 2;
        if (i & 1)
            cur *= -1;
        ans[ord[i].second] = cur;
        sum += 2 * abs(cur) * (1LL) * (ord[i].first);
    }
    cout << sum << endl;
    for (int i = 0; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
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
