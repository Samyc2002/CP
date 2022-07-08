#include <algorithm>
#include <assert.h>
#include <bitset>
#include <deque>
#include <functional>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <time.h>
#include <utility>
#include <vector>

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

struct Laptop {
    int speed;
    int ram;
    int hdd;
    int cost;
    bool outdated;

    Laptop() {
        speed = 0;
        ram = 0;
        hdd = 0;
        cost = 0;
        outdated = false;
    }
};

void solve() {
    int n;
    cin >> n;

    vector<Laptop> laptops(n);
    foi(i, n) cin >> laptops[i].speed >> laptops[i].ram >> laptops[i].hdd >>
        laptops[i].cost;

    foi(i, n) foi(j, n) {
        if (laptops[i].speed < laptops[j].speed &&
            laptops[i].ram < laptops[j].ram && laptops[i].hdd < laptops[j].hdd)
            laptops[i].outdated = true;
        else if (laptops[i].speed > laptops[j].speed &&
                 laptops[i].ram > laptops[j].ram &&
                 laptops[i].hdd > laptops[j].hdd)
            laptops[j].outdated = true;
    }

    int min = 1e9, pos = -1;
    foi(i, n) {
        if (!laptops[i].outdated && min > laptops[i].cost) {
            min = laptops[i].cost;
            pos = i + 1;
        }
    }

    cout << pos;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
