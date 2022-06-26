#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

#define gfoi(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define gfod(i, j, k, in) for (int i=j ; i>=k ; i-=in)
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
typedef unsigned long long int  ull;
typedef pair<int, int> pii;
typedef map<int, int>::iterator mi;

void swap (int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void solve() {
    int n, m;
    cin >> n >> m;

    vii grid(n, vi(m, 0));
    vii mn(n, vi(m, 0));
    vii mx(n, vi(m, 0));

    foi(i, n) {
        foi(j, m) {
            cin >> grid[i][j];
        }
    }

    mn[0][0] = mx[0][0] = grid[0][0];

    gfoi(i, 1, n, 1)
        mx[i][0] = mn[i][0] = mx[i - 1][0] + grid[i][0];

    gfoi(j, 1, m, 1)
        mx[0][j] = mn[0][j] = mx[0][j - 1] + grid[0][j];

    gfoi(i, 1, n, 1) {
        gfoi(j, 1, m, 1) {
            mx[i][j] = max(mx[i - 1][j], mx[i][j - 1]) + grid[i][j];
            mn[i][j] = min(mn[i - 1][j], mn[i][j - 1]) + grid[i][j];
        }
    }

    if(mx[n - 1][m - 1] % 2 || mn[n - 1][m - 1] > 0 || mx[n - 1][m - 1] < 0)
        cout << "NO\n";
    else
        cout << "YES\n";
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
