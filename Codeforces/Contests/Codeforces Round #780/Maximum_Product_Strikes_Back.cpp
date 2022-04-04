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

void solve(int t) {
    int n;
    cin >> n;
    vector<int> a(n);
    foi(i, n) {
        cin >> a[i];
    }
    int reserve=0;
    if(a[n-1]==0) {
        a.pop_back();
        n--;
        reserve++;
    }
    // cout << endl << "Solving Test " << t << endl;
    int left=-1, right=-1;
    int l=-1;
    foi(i, n+1) {
        // cout << "Running for i=" << i << endl;
        if(i==n || a[i]==0) {
            vector<int> negatives;
            gfoi(j, l+1, i, 1) {
                if(a[j]<0) {
                    negatives.PB(j);
                }
            }
            if(negatives.size()%2==0) {
                left=l+1;
                right=i-1;
                // cout << "# Negatives = even :: " << left << " :: " << right << endl;
            } else if(negatives.size()==1) {
                // left=(negatives[0]==l+1?l+2:l+1);
                // right=(negatives[0]==l+1?l+1:i-1);
                int cr2=0, cl2=0, cr=0, cl=0;
                gfoi(j, l+1, negatives[0], 1) {
                    if(a[j]==2) {
                        cl2++;
                    }
                    cl++;
                }
                gfoi(j, negatives[0]+1, i, 1) {
                    if(a[j]==2) {
                        cr2++;
                    }
                    cr++;
                }
                if(cl>cr) {
                    left=l+1;
                    right=negatives[0]-1;
                } else if (cl2==cr2) {
                    if(cl>cr) {
                        left=l+1;
                        right=negatives[0]-1;
                    } else {
                        left=negatives[0]+1;
                        right=i-1;
                    }
                } else {
                    left=negatives[0]+1;
                    right=i-1;
                }
                // cout << "# Negatives = 1 :: " << left << " :: " << right << endl;
            } else {
                if(a[negatives[0]] == -2) {
                    left = l+1;
                    right = negatives[negatives.size()-1]-1;
                } else if (a[negatives[negatives.size()-1]] == -2) {
                    left = negatives[0]+1;
                    right = i-1;
                } else {
                    // left = negatives[0]+1;
                    // right = i-1;
                    int cr2=0, cl2=0, cr=0, cl=0;
                    gfoi(j, l+1, negatives[0], 1) {
                        if(a[j]==2) {
                            cl2++;
                        }
                        cl++;
                    }
                    gfoi(j, negatives[negatives.size()-1]+1, i, 1) {
                        if(a[j]==2) {
                            cr2++;
                        }
                        cr++;
                    }
                    if(cl>cr) {
                        left=l+1;
                        right=negatives[negatives.size()-1]-1;
                    } else if (cl2==cr2) {
                        if(cl>cr) {
                            left=l+1;
                            right=negatives[negatives.size()-1]-1;
                        } else {
                            left=negatives[0]+1;
                            right=i-1;
                        }
                    } else {
                        left=negatives[0]+1;
                        right=i-1;
                    }
                }
                // cout << "# Negatives = 1 :: " << left << " :: " << right << endl;
            }
            l=i;
        }
    }
    cout << left << " " << n-right-1+reserve << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve(t);
    }
    return 0;
}