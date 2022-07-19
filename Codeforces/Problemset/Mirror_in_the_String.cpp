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
    string s;
    cin >> s;

    int k = 0;
    gfoi(i, 1, n, 1) {
        if (s[i] > s[k])
            break;
        else
            k++;
    }

    string f = s.substr(0, k + 1);
    string b = f;
    reverse(all(b));

    string c1 = f + b;
    string c2 = "";
    c2.PB(s[0]);
    c2.PB(s[0]);

    string ans = (c1[0] == c2[0] && c1[1] == c2[1]) ? c2 : c1;

    cout << ans << endl;
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
