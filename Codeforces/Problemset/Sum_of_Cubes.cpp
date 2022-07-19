#include <bits/stdc++.h>
#include <cmath>

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

ll N = 1e12;
unordered_set<ll> c;

void solve() {
    ll x;
    cin >> x;

    for (ll i = 1; i * i * i <= N; i++)
        if (c.find(x - i * i * i) != c.end()) {
            cout << "YES" << endl;
            return;
        }

    cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for (ll i = 1; i * i * i <= N; i++) {
        c.insert(i * i * i);
    }

    while (t--) {
        solve();
    }
    return 0;
}
