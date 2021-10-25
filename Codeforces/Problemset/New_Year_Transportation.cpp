#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

#define gfoi(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define gfod(i, j, k, in) for (int i=j ; i>=k ; i-=in)
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
typedef unsigned long long int  ull;
typedef pair<int, int> pii;
typedef map<int, int>::iterator mi;

int minar(int ar[], int n) {
    int min = *min_element(ar, ar + n);
    return min;
}

int maxar(int ar[], int n) {
    int max = *max_element(ar, ar + n);
    return max;
}

void swap (int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

struct compare {
    bool operator()(const pair<int, int>& value, const int& key) {
        return (value.first < key);
    }
    bool operator()(const int& key, const pair<int, int>& value) {
        return (key < value.first);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t;
    cin >> n >> t;
    vi graph(n);
    gfoi(i, 1, n, 1) {
        int p;
        cin >> p;
        graph[i] = p+i;
    }
    int x=1;
    while(x<t) {
        x = graph[x];
    }
    if(x == t) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}