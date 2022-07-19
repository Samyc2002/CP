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

struct Participant {
    string handle;
    int plus, minus, a, b, c, d, e, total;

    Participant(string _handle, int _plus, int _minus, int _a, int _b, int _c,
                int _d, int _e) {
        handle = _handle;
        plus = _plus;
        minus = _minus;
        a = _a;
        b = _b;
        c = _c;
        d = _d;
        e = _e;

        total = _a + _b + _c + _d + _e + (100 * _plus) - (50 * _minus);
    }
};

void solve() {
    int n;
    cin >> n;

    vector<pair<int, string>> store;
    foi(i, n) {
        string handle;
        int plus, minus, a, b, c, d, e;
        cin >> handle >> plus >> minus >> a >> b >> c >> d >> e;

        Participant p = Participant(handle, plus, minus, a, b, c, d, e);
        store.PB({p.total, p.handle});
    }

    sort(all(store));
    cout << store[n - 1].second;
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
