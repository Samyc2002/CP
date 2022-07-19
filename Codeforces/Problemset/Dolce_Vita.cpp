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
typedef unsigned long int ul;
typedef long long int ll;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef vector<vi> vii;
typedef long int l;
typedef unsigned long long int ull;
typedef pair<ll, ll> pii;
typedef map<ll, ll>::iterator mi;

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void solve() {
    ll n, x;
    cin >> n >> x;
    vi a(n);
    foi(i, n) cin >> a[i];

    sort(all(a));
    ll packs = 0;
    vi prefix(n);
    prefix[0] = a[0];
    foi(i, n - 1) prefix[i + 1] = prefix[i] + a[i + 1];

    foi(i, n) packs += max(0LL, ((x - prefix[i]) / (ll)(i + 1)) + 1LL);

    cout << packs << endl;
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
