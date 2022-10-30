#include <bits/stdc++.h>
#include <algorithm>
#include <sstream>
#include <string>
 
using namespace std;
int powerof2(long long n);
typedef long long ll;
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
 
int main()
{
    long long n, k, t,i,j=0,l,m,o,p,no=0,u,v,w,x,y,a,b,c;
    unsigned long long two;
    long double e,f,g;
 
    cin >> t;
while(t--){
    cin>>n>>k;
    ll mice[k]; 
    for(i=0;i<k;i++)
    {
        cin>>mice[i];
    }
    
    
    sort(mice,mice+k);
  
   
    int ans=0;
    ll time=n;
    ll catpos=0;
    for(j=k-1;j>-1;j--)
    {
        if(catpos<mice[j])
        {
            ans++;
            time=time-n+mice[j];
            catpos=catpos+n-mice[j];
           // cout<<"catpos"<<catpos<<' '<<time<<endl;
        }
        else
        {
            break;
        }
    }
    cout<<ans<<endl;

    
    }
    return 0;
}
 
