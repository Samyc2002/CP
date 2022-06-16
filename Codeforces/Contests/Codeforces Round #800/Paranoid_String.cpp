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

int partition (int arr[], int low, int high)        // function to support quicksort
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)        // to be used only for small arrays and datasets
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void merge(int arr[], int l, int m, int r)          // function to support merge sort
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    int i = 0;
    int j = 0;
    int k = l;
 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int l,int r){          // to be used only for larger arrays or datasets
    if(l>=r){
        return;
    }
    int m =l+ (r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}

vector<vector<int>> dp;

char process(string s) {
    int n = s.length();

    if(n != 2) {
        return 'N';
    }

    if(s == "01") {
        return '1';
    } else
        return '0';
}

bool isParanoid(string s) {
    int n = s.length();
    stack<char> mem;
    foi(i, n)
    {
        if(mem.empty()) {
            mem.push(s[i]);
            continue;
        }
        if(mem.top() == s[i]) {
            mem.push(s[i]);
        } else {
            char ch = s[i];
            while(!mem.empty() && ch != mem.top()) {
                char top = mem.top();
                mem.pop();
                string str = "";
                str += top;
                str += ch;
                ch = process(str);
            }
            mem.push(ch);
        }
    }
    return mem.size() == 1;
}

bool isValidIndex(int i, int n) {
    return i >= 0 && i < n;
}

int recursion(string s, int l, int r)
{
    int n = s.length();

    // if(isValidIndex(l, n) && isValidIndex(r, n)) {
        if(r<l) return 0;

        if (dp[l][r] > 0) return dp[l][r];

        if(l == r) return dp[l][r] = 1;

        if(r == l+1) {
            if(s[r] != s[l]) {
                return dp[l][r] = 3;
            } else {
                return dp[l][r] = 2;
            }
        }

        if(isParanoid(s.substr(l, r-l+1))) {
            return dp[l][r] = 1 + recursion(s, l+1, r) + recursion(s, l, r-1) - recursion(s, l+1, r-1);
        }

        return dp[l][r] = recursion(s, l+1, r) + recursion(s, l, r-1) - recursion(s, l+1, r-1);
    
    // return 0;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    // dp.clear();
    // dp.resize(n, vector<int>(n));
    // int noOfPairs = recursion(s, 0, n - 1);
    ll ans = 0;
    // if(n>2 && isParanoid(s)) {
    //     noOfPairs += 2;
    // }
    gfoi(i, 1, n, 1) {
        if(s[i] != s[i-1]) {
            ans+=i;
        }
    }
    cout << ans+n << endl;
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