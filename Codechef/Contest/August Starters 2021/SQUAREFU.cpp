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
#include <unordered_map>
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

// Prime[] array to calculate Prime Number
int prime[1000001] = { 0 };
 
// Array k[] to store the value of k for
// each element in arr[]
int k[1000001] = { 0 };
 
// For value of k, Sieve function is
// implemented
void Sieve()
{
    // Initialize k[i] to i
    for (int i = 1; i < 1000001; i++)
        k[i] = i;
 
    // Prime Sieve
    for (int i = 2; i < 1000001; i++) {
 
        // If i is prime then remove all
        // factors of prime from it
        if (prime[i] == 0)
            for (int j = i; j < 1000001; j += i) {
 
                // Update that j is not
                // prime
                prime[j] = 1;
 
                // Remove all square divisors
                // i.e. if k[j] is divisible
                // by i*i then divide it by i*i
                while (k[j] % (i * i) == 0)
                    k[j] /= (i * i);
            }
    }
}
 
// Function that return total count
// of pairs with pefect square product
int countPairs(vi arr)
{
    // Map used to store the frequency of k
    unordered_map<int, int> freq;
 
    // Store the frequency of k
    for (int i = 0; i < arr.size(); i++) {
        freq[k[arr[i]]]++;
    }
 
    int sum = 0;
 
    // The total number of pairs is the
    // summation of (fi * (fi - 1))/2
    for (auto i : freq) {
        sum += ((i.second - 1) * i.second) / 2;
    }
 
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Sieve();
    int t;
    cin  >> t;
    while(t--) {
        int n;
        cin >> n;
        vi arr;
        int countZero = 0;
        foi(i, n) {
            int q;
            cin >> q;
            if(q != 0) {
                arr.PB(q);
            }
        }
        n = arr.size();
        ll totalPairs = n*(n-1)/2;
        ll perfectSquares = countPairs(arr);
        cout << totalPairs - perfectSquares << endl;
    }
    return 0;
}