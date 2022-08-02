#include <bits/stdc++.h>

using namespace std;

#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.rend(), cont.rbegin()
#define PB push_back
#define PI 3.1415926535897932384626433832795
#define endl "\n"
typedef long int l;
typedef unsigned long int ul;
typedef long long int ll;
typedef unsigned long long int ull;

bool took[1005];
int p[1005];

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> p[i];
    for (int i = 1; i <= n; i++)
        took[i] = 0;

    if (n == 1) {
        cout << "-1\n";
        return;
    }

    for (int i = 1; i <= n - 2; i++) {
        int k = 1;
        while (took[k] || k == p[i])
            ++k;
        cout << k << " ";
        took[k] = 1;
    }

    int a = -1, b = -1;
    for (int i = 1; i <= n; i++)
        if (!took[i]) {
            if (a == -1)
                a = i;
            else
                b = i;
        }

    if (a != p[n - 1] && b != p[n])
        cout << a << " " << b << "\n";
    else
        cout << b << " " << a << "\n";
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
