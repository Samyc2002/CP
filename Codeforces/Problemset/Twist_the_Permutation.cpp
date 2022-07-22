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
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int ans[n];
    for (int i = n; i > 0; --i) {
        int ind = 0;
        for (int j = 0; j < i; ++j) {
            ind = a[j] == i ? j : ind;
        }
        int b[i];
        for (int j = 0; j < i; ++j) {
            b[(i - 1 - ind + j) % i] = a[j];
        }
        for (int j = 0; j < i; ++j) {
            a[j] = b[j];
        }
        ans[i - 1] = i != 1 ? (ind + 1) % i : 0;
    }
    for (int i = 0; i < n; ++i) {
        cout << ans[i] << ' ';
    }
    cout << '\n';
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
