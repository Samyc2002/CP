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

bool isPallindrome(ll n) {
    string s = to_string(n);
    int i = 0, j = s.size()-1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    ll k;
    cin >> k;

    vi arr(n);
    foi(i, n) {
        arr[n - i - 1] = k % 10;
        k = k / 10;
    };

    ll back = 0, front = 0;

    foi(i, n/2) {
        back *= 10;
        back += arr[n - i - 1];
        front *= 10;
        front += arr[i];
    }

    ll res = 0;

    if(back < front) {
        res = front - back;
        gfoi(i, n/2, n, 1) {
            res *= 10;
        }
    } else if(front < back) {
        res = back - front;
        gfoi(i, n/2, n, 1) {
            res *= 10;
        }
    } else {
        ll num = k;
        ++k;
        while (!isPallindrome(k))
        {
            ++k;
        }
        res = k - num;
    }

    cout << res << endl;
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