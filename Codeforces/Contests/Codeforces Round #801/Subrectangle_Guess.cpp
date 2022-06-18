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
    vii a(n, vi(m));
    foi(i, n) foi(j, m) cin >> a[i][j];

    int mx = -1e9;
    pii maxIndex  = pii(1, 1);
    foi(i, n) foi(j, m)
    {
        int mn = a[i][j];
        if(mn > mx) {
            mx = mn;
            maxIndex = pii(i+1, j+1);
        }
    }

    int h = maxIndex.first;
    int w = maxIndex.second;

    ll area = max(h, n - h + 1) * max(w, m - w + 1);
    cout << area << endl;
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