#include <bits/stdc++.h>

using namespace std;

#define gfoi(i, j, k, in) for (int i = j; i < k; i += in)
#define gfod(i, j, k, in) for (int i = j; i >= k; i -= in)
#define foi(i, j) gfoi(i, 0, j, 1)
#define fod(i, j) gfod(i, 0, j, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define PB push_back
#define PI 3.1415926535897932384626433832795
#define endl "\n"
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vi> vii;
typedef long int l;
typedef unsigned long int ul;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int, int> pii;
typedef map<int, int>::iterator mi;

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void solve() {
    int n;
    cin >> n;
    vi a(n);
    foi(i, n) cin >> a[i];

    int ans = 0;
    foi(i, n) if (a[i] <= 0) ans++;

    sort(all(a));
    int mn = INT_MAX;
    foi(i, n) if (a[i] > 0) mn = min(mn, a[i]);

    bool flag = (mn < INT_MAX);
    gfoi(i, 1, n, 1) if (a[i] <= 0) flag &= (a[i] - a[i - 1] >= mn);

    if (flag)
        cout << ans + 1 << endl;
    else
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
