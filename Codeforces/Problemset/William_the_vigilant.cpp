#include <bits/stdc++.h>
#include <algorithm>
#include <sstream>

#include<string> 
 // https://www.codechef.com/problems/MNMXROT
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

void solve()
{
    long long n, k,i,j=0,l,m,o,p,no=0,u,v,w,y,b,q,a;
    unsigned long long two;
    long double e,f,g;
    int x;
    cin>>n>>q;
    char str[n+3];
    scanf("%s",str);
    char c;
    int ans=0;
    for( i=0;i<n-2;i++)
    {
        if(str[i]=='a')
        {
            if(str[i+1]=='b')
            {
                if(str[i+2]=='c')
                {
                    ans++;
                }
            }
        }
           
    }
 
    for(j=0;j<q;j++)
    {
        cin>>u>>c;
        b=0;
        for( i=u-3;i<u;i++)
        {
            if(i>=0)
            {

            
            if(str[i]=='a')
            {
                if(str[i+1]=='b')
                {
                    if(str[i+2]=='c')
                    {
                        b++;
                    }
                }
            } 
            }
        }
        
        str[u-1]=c;
        a=0;
        for( i=u-3;i<u;i++)
        {
            if(i>=0)
            {
                if(str[i]=='a')
                {
                    if(str[i+1]=='b')
                    {
                        if(str[i+2]=='c')
                        {
                            a++;
                        }
                    }
                } 
            }
        }
        ans=ans +a-b;

    
    cout<<ans<<'\n';
    }

     
}


int main()
{
    long long n, k, t,i,j=0,l,m,o,p,no=0,u,v,w,x,y,a,b,c;
    unsigned long long two;
    long double e,f,g;
 
    solve();
    

return 0;
}
