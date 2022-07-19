#include <bits/stdc++.h>

using namespace std;

#define gfoi(i, j, k, in) for (int i = j; i < k; i += in)
typedef vector<int> vi;

void solve() {
    int n;
    cin >> n;
    vi fib(n + 1);

    fib[0] = 1;
    fib[1] = 1;
    gfoi(i, 2, n + 1, 1) { fib[i] = fib[i - 1] + fib[i - 2]; }

    cout << fib[n];
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
