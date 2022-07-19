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

bool solve() {
    int n;
    cin >> n;
    vi a(n);
    foi(i, n) cin >> a[i];
    // vi b = a;
    //
    // gfoi(i, 0, n - 1, 2) if (b[i] > b[i + 1]) swap(&b[i], &b[i + 1]);
    //
    // bool ok1 = true;
    // foi(i, n - 1) if (b[i] > b[i + 1]) ok1 = false;

    // gfoi(i, 1, n, 2) if (a[i] > a[i + 1]) swap(&a[i], &a[i + 1]);
    //
    // bool ok2 = true;
    // foi(i, n - 1) if (a[i] > a[i + 1]) ok2 = false;

    reverse(all(a));

    gfoi(i, 0, n, 2) if (i < n - 1 && a[i] < a[i + 1]) swap(&a[i], &a[i + 1]);

    reverse(all(a));
    bool ok = true;
    foi(i, n - 1) if (a[i] > a[i + 1]) ok = false;

    return ok;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        if (solve())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
