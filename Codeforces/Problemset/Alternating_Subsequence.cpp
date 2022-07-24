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

ll sgn(int x) {
    if (x > 0)
        return 1;
    return -1;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        int cur = a[i];
        int j = i;
        while (j < n && sgn(a[i]) == sgn(a[j])) {
            cur = max(cur, a[j]);
            ++j;
        }
        sum += cur;
        i = j - 1;
    }
    cout << sum << endl;
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
