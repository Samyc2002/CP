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

int hash_size(string s) {
    if (s == "S")
        return 0;
    else if (s == "M")
        return 1;
    else if (s == "L")
        return 2;
    else if (s == "XL")
        return 3;
    else if (s == "XXL")
        return 4;
    return -1;
}

vs priority_order(string s) {
    if (s == "S")
        return {"S", "M", "L", "XL", "XXL"};
    else if (s == "M")
        return {"M", "L", "S", "XL", "XXL"};
    else if (s == "L")
        return {"L", "XL", "M", "XXL", "S"};
    else if (s == "XL")
        return {"XL", "XXL", "L", "M", "s"};
    else if (s == "XXL")
        return {"XXL", "XL", "L", "M", "S"};
    return {};
}

void solve() {
    vi sizes(5);
    cin >> sizes[0] >> sizes[1] >> sizes[2] >> sizes[3] >> sizes[4];
    int n;
    cin >> n;
    while (n--) {
        string size;
        cin >> size;

        for (string s : priority_order(size)) {
            if (sizes[hash_size(s)]) {
                cout << s << endl;
                sizes[hash_size(s)]--;
                break;
            }
        }
    }
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
