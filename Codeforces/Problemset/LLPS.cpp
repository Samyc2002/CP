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

class UnionFind {
    private:
        
        int size;
        int* sz;
        int* id;
        int numOfComponents;

    public:

        UnionFind(int size) {
            if(size <= 0) {
                throw new runtime_error("Invalid size");
            }
            else {
                this->size = size;
                numOfComponents = size;
                sz = new int[size];
                id = new int[size];

                foi(i, size) {
                    id[i] = i;
                    sz[i] = 1;
                }
            }
        }

        int find(int p) {
            int root = p;
            while(root != id[root]) {
                root = id[root];
            }
            while(p != root) {
                int next = id[p];
                id[p] = root;
                p = next;
            }

            return root;
        }

        bool connected(int p, int q) {
            return find(p) == find(q);
        }

        int componentSize(int p) {
            return sz[find(p)];
        }

        int getSize() {
            return size;
        }

        int components() {
            return numOfComponents;
        }

        void unify(int p, int q) {
            if(connected(p, q)) {
                return;
            }

            int root1 = find(p);
            int root2 = find(q);

            if(sz[root1] < sz[root2]) {
                sz[root2] += sz[root1];
                id[root1] = root2;
            }
            else {
                sz[root1] += sz[root2];
                id[root2] = root1;
            }

            numOfComponents--;
        }
};

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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    sort(all(s));
    reverse(all(s));
    int i=0;
    while(s[i]==s[i+1]) {
        i++;
    }
    i++;
    foi(j, i) {
        cout << s[0];
    }
    return 0;
}