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

bool isPallindrome(ll n) {
    string s = to_string(n);
    int i = 0, j = s.size() - 1;
    while (i < j) {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

// void solve() {
//     int n;
//     cin >> n;
//     ll k;
//     cin >> k;

//     int q = k, r = 1;
//     for (int i = 0; i < n; i++) {
//         q = k % 10;
//         r = k / 10;
//     }

//     ll case1 = 0, case2 = 0;
//     for (int i = 0; i < n + 1; i++) {
//         case1 *= 10;
//         case1 += 1;
//     }
//     for (int i = 0; i < n; i++) {
//         case2 *= 10;
//         case2 += 9;
//     }
//     if (q == 9)
//         cout << case1 - k << endl;
//     else
//         cout << case2 - k << endl;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans;
        if (s[0] != '9') {
            for (int i = 0; i < n; i++) {
                int x = s[i] - '0';
                int y = 9 - x;
                ans += y + '0';
            }
        } else {
            int c = 0;
            for (int i = n - 1; i >= 0; i--) {
                int x = s[i] - '0';
                x += c;
                if (x > 1) {
                    int y = 11 - x;
                    c = 1;
                    ans += (y + '0');
                } else {
                    c = 0;
                    int y = 1 - x;
                    ans += y + '0';
                }
            }
            reverse(ans.begin(), ans.end());
        }
        cout << ans << endl;
    }
}
