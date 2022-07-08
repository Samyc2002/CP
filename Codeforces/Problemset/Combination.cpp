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

bool compareFunc(pii a, pii b) {
    if (a.second > b.second) {
        return true;
    } else if (a.second == b.second) {
        return a.first > b.first;
    }
    return false;
}

void solve() {
    int n;
    cin >> n;
    vector<pii> cards(n);

    foi(i, n) {
        int f, s;
        cin >> f >> s;
        cards[i] = {f, s};
    }

    sort(all(cards), compareFunc);

    ll score = 0, counter = 1;
    foi(i, n) {
        if (counter == 0)
            break;

        counter += cards[i].second - 1;
        score += cards[i].first;
    }

    cout << score;
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
