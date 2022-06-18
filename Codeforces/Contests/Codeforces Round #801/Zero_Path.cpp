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

bool backtrack(int sum, vii grid, int i, int j) {
    bool result = (sum == 0);

    if(j == grid[0].size()-1 && i == grid.size()-1) {
        // return result;
    }
    else if (j == grid[0].size() - 1)
    {
        sum += grid[i + 1][j];
        result = backtrack(sum, grid, i + 1, j);
        sum -= grid[i + 1][j];
    }
    else if (i == grid.size() - 1)
    {
        sum += grid[i][j + 1];
        result = backtrack(sum, grid, i, j + 1);
        sum -= grid[i][j + 1];
    }
    else
    {
        sum += grid[i + 1][j];
        bool result1 = backtrack(sum, grid, i + 1, j);
        sum -= grid[i + 1][j];
        sum += grid[i][j + 1];
        bool result2 = backtrack(sum, grid, i, j + 1);
        sum -= grid[i][j + 1];
        result = (result1 || result2);
    }

    return result;
}

void solve() {
    int n, m;
    cin >> n >> m;

    vii grid(n, vi(m, 0));

    foi(i, n) {
        foi(j, m) {
            cin >> grid[i][j];
        }
    }

    int sum = grid[0][0];

    if(backtrack(sum, grid, 0, 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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