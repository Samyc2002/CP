// a for john b for jack
#include<bits/stdc++.h>
using namespace std;
int swap(int  arra[], int arrb[],int n, int m ){
    int a=0, b=0;
    for(int i=0; i<n; i++){
        a=a+arra[i];
    }    
    for(int i=0; i<m; i++){
        b=b+arrb[i];
    }
    priority_queue<int, vector<int> , greater<int>> pa(arra,arra+n);
    priority_queue<int> pb(arrb, arrb+m);
    int i=0;
    int j=0;
    while(i<n && pb.empty()==false && a<b){
        a= a- pa.top()+ pb.top();
        b= b- pb.top() + pa.top();
        pa.pop();
        pb.pop();
        i++;
        j++;
    }
    if(a>b) return j;
    else return -1;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr1[n], arr2[m];
        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }
        for(int i=0 ; i<m; i++){
            cin>>arr2[i];
        }
        cout<<swap(arr1, arr2, n, m);
    }
    return 0;
}