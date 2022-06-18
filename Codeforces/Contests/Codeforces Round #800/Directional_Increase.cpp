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

int MAX = 2e5 + 100;

void solve() {
    int n;
    cin >> n;
    vi a(n);
    vector<ll> ps(n);
    cin >> a[0];
    ps[0] = a[0];

    gfoi(i, 1, n, 1) {
        cin >> a[i];
        ps[i] = ps[i - 1] + a[i];
    }
    
    if(ps[n-1] != 0){
        cout << "No\n";
        return;
    }
    
    bool ok = true;
    foi(i, n) {
        if(ps[i] < 0) ok = false;
    }

    bool visited_zero = false;
    foi(i, n) {
        if(ps[i] == 0) visited_zero = true;
        else if(visited_zero) ok = 0;
    }

    if(ok) cout << "Yes\n";
    else cout << "No\n";
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