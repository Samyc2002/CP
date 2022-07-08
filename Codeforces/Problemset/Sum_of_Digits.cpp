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

ll sumOfDigits(ll n) {
    vector<int> digits;
    while (n) {
        digits.PB(n % 10);
        n /= 10;
    }
    return accumulate(all(digits), 0);
}

int solve() {
    string n;
    cin >> n;

    if (n.length() == 1)
        return 0;

    ll sum = 0;
    foi(i, n.length()) sum += (n[i] - '0');
    if (sum / 10 == 0)
        return 1;

    sum = sumOfDigits(sum);
    if (sum / 10 == 0)
        return 2;

    sum = sumOfDigits(sum);
    if (sum / 10 == 0)
        return 3;

    return 4;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--) {
        cout << solve();
    }
    return 0;
}
