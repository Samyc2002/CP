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

    vi ans;
    unordered_set<int> cache;
    gfoi(i, 1, n + 1, 1) {
        if (cache.find(i) == cache.end()) {
            ans.PB(i);
            cache.insert(i);
            int k = i;
            while (2 * k <= n) {
                ans.PB(2 * k);
                cache.insert(2 * k);
                k *= 2;
            }
        }
    }

    // int i = 1, k = i;
    // while (i <= n) {
    //     while (k <= n) {
    //         if (cache.find(k) == cache.end()) {
    //             cache.insert(k);
    //             ans.PB(k);
    //         }

    //         k *= 2;
    //     }
    //     i++;
    // }

    if (n == 2) {
        cout << 2 << endl;
        cout << "1 2";
    } else if (n == 3) {
        cout << 3 << endl;
        cout << "2 1 3";
    } else {
        cout << 2 << endl;
        foi(i, n) cout << ans[i] << " ";
    }

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
