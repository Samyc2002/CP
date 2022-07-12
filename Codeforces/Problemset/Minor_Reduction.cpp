#include <bits/stdc++.h>

using namespace std;

#define gfoi(i, j, k, in) for (int i = j; i < k; i += in)
#define gfod(i, j, k, in) for (int i = j; i >= k; i -= in)
#define foi(i, j) gfoi(i, 0, j, 1)
#define fod(i, j) gfod(i, j, 0, 1)
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

string solve() {
    string n;
    cin >> n;

    int len = n.length();

    bool f = 0;
    fod(i, len - 2) {
        if (n[i + 1] - '0' + n[i] - '0' >= 10) {
            int k = n[i + 1] - '0' + n[i] - '0';
            char ch = k % 10 + '0';
            n[i + 1] = ch;
            n[i] = '1';
            f = 1;
            break;
        }
    }

    if (!f) {
        n[1] += n[0] - '0';
        n.erase(n.begin());
    }

    return n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
    return 0;
}
