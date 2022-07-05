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
#include <unordered_map>
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

void print(ll test, ll value) {
  cout << "Case #" << test << ": " << value << endl;
}

bool queries(vii prefix, string s) {
  int l, r;
  cin >> l >> r;

  if (l == r) {
    return true;
  }

  vi left = prefix[l - 1];
  vi right = prefix[r - 1];

  int odds = 0;
  for (int i = 0; i < 26; i++) {
    if (right[i] - left[i] >= 0) {
      odds += ((right[i] - left[i]) % 2);
    }
    // cout << p.first << "-->" << substr[p.first] << endl;
  }
  // cout << endl;

  if (odds > 1)
    return false;
  return true;
}

void solve(int t) {
  // Write your code here
  int n, q;
  cin >> n >> q;
  string s;
  cin >> s;

  vii prefix(n, vi(26));
  prefix[0][s[0] - 'A']++;
  for (int i = 1; i < n; i++) {
    prefix[i] = prefix[i - 1];
    prefix[i][s[i] - 'A']++;
  }

  int ans = 0;
  while (q--) {
    if (queries(prefix, s)) {
      ans++;
    }
  }

  print(t, ans);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    solve(i + 1);
  }
  return 0;
}
