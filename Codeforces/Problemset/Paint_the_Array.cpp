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
typedef vector<long long int> vi;
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
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll v1 = 0, v2 = 0;
    for (int i = 0; i < n; i += 2)
        v1 = __gcd(v1, a[i]);
    for (int i = 1; i < n; i += 2)
        v2 = __gcd(v2, a[i]);

    bool ok = true;
    for (int i = 0; i < n; i += 2) {
        if (a[i] % v2 == 0) {
            ok = false;
            break;
        }
    }
    if (ok) {
        cout << v2 << "\n";
        return;
    }

    ok = true;
    for (int i = 1; i < n; i += 2) {
        if (a[i] % v1 == 0) {
            ok = false;
            break;
        }
    }
    if (ok) {
        cout << v1 << "\n";
        return;
    }

    cout << 0 << "\n";
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