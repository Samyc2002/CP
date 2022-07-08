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

bool isValid(int i, int j, int n, int m, vs grid, set<pii> wolves) {
    return (i >= 0 && i < n && j >= 0 && j < m &&
            wolves.find({i, j}) == wolves.end() && grid[i][j] == 'W');
}

void solve() {
    int n, m;
    cin >> n >> m;
    vs grid(n);
    foi(i, n) cin >> grid[i];

    int pig = 0, wolf = 0;
    foi(i, n) foi(j, m) {
        if (grid[i][j] == 'P')
            pig++;
        else if (grid[i][j] == 'W')
            wolf++;
    }

    set<pii> feeding_wolves;
    foi(i, n) foi(j, m) {
        if (grid[i][j] == 'P') {
            if (isValid(i + 1, j, n, m, grid, feeding_wolves)) {
                feeding_wolves.insert({i + 1, j});
                continue;
            }
            if (isValid(i, j + 1, n, m, grid, feeding_wolves)) {
                feeding_wolves.insert({i, j + 1});
                continue;
            }
            if (isValid(i - 1, j, n, m, grid, feeding_wolves)) {
                feeding_wolves.insert({i - 1, j});
                continue;
            }
            if (isValid(i, j - 1, n, m, grid, feeding_wolves)) {
                feeding_wolves.insert({i, j - 1});
                continue;
            }
        }
    }

    cout << feeding_wolves.size();
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
