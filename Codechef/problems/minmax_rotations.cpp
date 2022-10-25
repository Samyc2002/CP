#include <bits/stdc++.h>
#include <algorithm>
#include <sstream>
#include <string>
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
    int kx,ky,r1x,r1y,r2x,r2y,yes=0,du;
    
    cin>>kx>>ky>>r1x>>r1y>>r2x>>r2y;
    if(kx!=1&&kx!=8&&ky!=1&&ky!=8)
    {
        cout<<"NO\n";
    
    }
    else
    {
        if(kx==1)
        {
            if(r1x!=2&&r2x!=2)
            {
                du=0;
            }
            else
            {
                if(r2y==r1y)
                {
                    du=0;
                }
                else
                {
                    if(ky==r1y||ky==r2y||ky==r1y+1||ky==r2y+1||ky==r1y-1||ky==r2y-1)  
                    {
                        du=0;

                    } 
                    else
                    {
                        
                        yes=1;
                    }
                }

            }
        }
        if(kx==8)
        { 
            if(r1x!=7&&r2x!=7)
            {
                du=0;
            }
            else
            {
                if(r2y==r1y)
                {
                    du=0;
                }
                else
                {
                    if(ky==r1y||ky==r2y||ky==r1y+1||ky==r2y+1||ky==r1y-1||ky==r2y-1)  
                    {
                        du=0;

                    } 
                    else
                    {
                        yes=1;
                    }
                }

            } 
        }
        if(ky==1)
        {
            if(r1y!=2&&r2y!=2)
            {
                du=0;
            }
            else
            {
                if(r2x==r1x)
                {
                    du=0;
                }
                else
                {
                    if(kx==r1x||kx==r2x||kx==r1x+1||kx==r2x+1||kx==r1x-1||kx==r2x-1)  
                    {
                       du=0;

                    } 
                    else
                    {
                        yes=1;
                    }
                }

            }
        }
        if(ky==8)
        {
            if(r1y!=7&&r2y!=7)
            {
                du=0;
            }
            else
            {
                if(r2x==r1x)
                {
                    du=0;
                }
                else
                {
                    if(kx==r1x||kx==r2x||kx==r1x+1||kx==r2x+1||kx==r1x-1||kx==r2x-1)  
                    {
                       du=0;

                    } 
                    else
                    {
                        yes=1;
                    }
                }

            }
        }
    }
    if(yes==1)
        cout<<"yes\n";
    else
        cout<<"no\n";
}

int main()
{
    long long n, k, t,i,j=0,l,m,o,p,no=0,u,v,w,x,y,a,b,c;
    unsigned long long two;
    long double e,f,g;
 
    cin >> t;
while(t--){


    solve();
    
}
return 0;
}