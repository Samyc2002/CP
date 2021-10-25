#include <iostream>

using namespace std;
int count=0,n;

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n-1; i++)     
      
    // Last i elements are already in place 
    for (j = 0; j < n-i-1; j++) 
        if (arr[j] > arr[j+1]) {
            swap(&arr[j], &arr[j+1]);
            count++;  
        }
}

int main()
{
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       cin>>arr[i];
       bubbleSort(arr,n);
       cout<<count;
    return 0;
}