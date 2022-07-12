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
    int k, n, m;
    cin >> k >> n >> m;
    vi a(n), b(m);
    foi(i, n) cin >> a[i];
    foi(i, m) cin >> b[i];

    int i = 0, j = 0;
    bool ok = true;
    vi ans;
    while (i < n && j < m) {
        if (a[i] > k && b[j] > k) {
            ok = false;
            break;
        }

        if (a[i] > k) {
            ans.PB(b[j]);
            if (b[j] == 0)
                k++;
            j++;
        } else {
            ans.PB(a[i]);
            if (a[i] == 0)
                k++;
            i++;
        }
    }

    while (i < n) {
        if (a[i] > k) {
            ok = false;
            break;
        }
        ans.PB(a[i]);
        if (a[i] == 0)
            k++;
        i++;
    }

    while (j < m) {
        if (b[j] > k) {
            ok = false;
            break;
        }
        ans.PB(b[j]);
        if (b[j] == 0)
            k++;
        j++;
    }

    if (!ok) {
        cout << -1 << endl;
        return;
    }

    foi(i, ans.size()) cout << ans[i] << " ";
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
