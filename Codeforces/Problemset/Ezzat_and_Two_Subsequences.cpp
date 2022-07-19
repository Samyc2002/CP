#include <bits/stdc++.h>
#include <iomanip>

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

double AVG(vi a, int start, int end) {
    double avg = 0;

    gfoi(i, start, end, 1) {
        avg *= (double)(i - start);
        avg += (double)a[i];
        avg /= (double)(i - start + 1);
    }

    return avg;
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int mx = v[0];
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > mx)
            mx = v[i];
        sum += v[i];
    }
    cout << fixed << setprecision(10) << 1.0 * (sum - mx) / (n - 1) + mx
         << endl;
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
