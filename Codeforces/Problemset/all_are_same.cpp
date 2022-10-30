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
    
    cin>>n;
   ll numbers[n];
   m=0;
   for(i=0;i<n;i++)
   {
       cin>>numbers[i];
       if(numbers[i]!=numbers[0]) m=1;

   }
   if(m==0)
   {
       cout<<-1<<endl;
       continue;
   }

   sort(numbers,numbers+n);
   vector <ll> difference;
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           difference.push_back(numbers[j]-numbers[i]);
       }
    }
    long long ans=difference[0];
    for(i=1;i<difference.size();i++)
    {
        ans= __gcd(ans,difference[i]);
        
    }
    cout<<ans<<endl;
}
    return 0;
}
 
