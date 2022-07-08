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

void solve() {
    int n;
    cin >> n;
    map<int, int> a;
    foi(i, n) {
        int k;
        cin >> k;
        a[k]++;
    }

    vi inc;
    vi dec;

    for (auto pr : a) {
        if (pr.second > 2) {
            cout << "NO";
            return;
        }

        if (pr.second == 2)
            inc.PB(pr.first);
        dec.PB(pr.first);
    }

    sort(all(inc));
    sort(all(dec), greater<int>());

    cout << "YES" << endl;
    cout << inc.size() << endl;
    foi(i, inc.size()) cout << inc[i] << " ";
    cout << endl;
    cout << dec.size() << endl;
    foi(i, dec.size()) cout << dec[i] << " ";
    cout << endl;
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
