#include <bits/stdc++.h>
#include <algorithm>
#include <sstream>
#include <string>
 
using namespace std;
int powerof2(long long n);
typedef long long ll;
typedef unsigned long long ull;
#define fo(i, n) for(i=0;i<n;i++)
int isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;
 
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
 
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
 
    return 1;
}


 
void solve()
{   long long n, k, t,i,j=0,l,m,o=0,p=0,no=0,u,v,w,ans,x,y,a,d,b,c,count=0;
    unsigned long long two;
    long double e,f,g;
    cin>>n;
    int arr[n];
    int mike=INT_MAX,mikei,joe=INT_MAX,joei;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<mike)
        {
            joei = i;
            mike = arr[i];
        }

    }
    if(n%2==1)
        cout<<"Mike"<<'\n';
    else{
        if(joei%2)
            cout<<"Mike"<<'\n';
        else
            cout<<"Joe"<<'\n';

    }

}
 
 
 
int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, k, t,i,j=0,l,m,o,p,no=0,u,v,w,x,y,a,b,c;
    unsigned long long two;
    long double e,f,g;
    
    cin>>t;
    while(t--)
    solve();
}
