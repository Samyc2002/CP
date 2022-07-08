#include <bits/stdc++.h>
#include <fstream>
#include <queue>

using namespace std;

#define gfoi(i, j, k, in) for (int i = j; i < k; i += in)
#define gfod(i, j, k, in) for (int i = j; i >= k; i -= in)
#define foi(i, j) gfoi(i, 0, j, 1)
#define fod(i, j) gfod(i, 0, j, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.rbegin(), cont.rend()
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
    ifstream infile;
    infile.open("input.txt");
    int n, k;
    infile >> n >> k;
    vector<pii> lighting(n);
    foi(i, n) {
        int k;
        infile >> k;
        lighting[i] = {k, i + 1};
    }
    sort(rall(lighting));
    int max_lighting = 0;
    vi reading;
    foi(i, k) {
        pii top = lighting[i];
        max_lighting = top.first;
        reading.PB(top.second);
    }
    sort(all(reading));

    ofstream outfile;
    outfile.open("output.txt", ios::out | ios::trunc);

    outfile << max_lighting << endl;
    foi(i, k) outfile << reading[i] << " ";
    outfile.close();
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
