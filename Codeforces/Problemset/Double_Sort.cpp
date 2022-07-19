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
    vi a(n), b(n);
    foi(i, n) cin >> a[i];
    foi(i, n) cin >> b[i];

    vii ans;
    foi(i, n - 1) foi(j, n - 1) if (a[j] > a[j + 1] || b[j] > b[j + 1]) {
        swap(&a[j], &a[j + 1]);
        swap(&b[j], &b[j + 1]);
        ans.PB({j + 1, j + 2});
    }

    bool valid = true;
    foi(i, n - 1) if (a[i] > a[i + 1] || b[i] > b[i + 1]) {
        valid = false;
        break;
    }

    if (!valid)
        cout << -1 << endl;
    else {
        cout << ans.size() << endl;
        foi(i, ans.size()) cout << ans[i][0] << " " << ans[i][1] << endl;
    }
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
