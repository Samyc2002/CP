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

long long LCM(int n1, int n2){
    ll hcf, temp, lcm;

    hcf = n1;
    temp = n2;
    
    while(hcf != temp)
    {
        if(hcf > temp)
            hcf -= temp;
        else
            temp -= hcf;
    }

    lcm = (n1 * n2) / hcf;
    return lcm;

}

// vector<ll> permute(vector<ll> ans, int n){
//     if(n==0)
//         return ans;
//     if(n==1)
//     {
//         ans.push_back(1);
//         return ans;
//     }
    
//     ans.push_back(n-1);
//     ans.push_back(n);
//     return permute(ans,n-2);

// }

 
void solve()
{   int n, k, t,i,j=0,l,m,o=0,p=0,no=0,u,v,w,x,y,d,c,count=0;
    unsigned long long two;
    long double e,f,g;
    
    cin>>n;
    // vector<ll> ans;
    // ans = permute(ans,n);
    if(n%2==1){
        cout<<1<<" ";
        i = 2;
        while (i<n)
        {
            cout<<i+1<<" "<<i<<" ";
            i+=2;

        }
        
    }
    else{

                i = 1;
        while (i<n)
        {
            cout<<i+1<<" "<<i<<" ";
            i+=2;

        }

    }
    cout<<"\n";


    

    
   
    


    
   
  
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
