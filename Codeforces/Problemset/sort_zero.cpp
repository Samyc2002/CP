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

vector<ll> zero(vector<ll> arr,ll x){
    ll i;
    fo(i,arr.size()){
        if(arr[i]==x)
            arr[i] = 0;
    }

     
    return arr;
} 

 
void solve()
{   int n, k, t,i,j=0,l,m,o=0,p=0,no=0,u,v,w,x,y,d,c,count=0;
    unsigned long long two;
    long double e,f,g;
    
    cin>>n;
    vector<ll> arr;
    fo(i,n){
        cin>>k;
        arr.push_back(k);
    }
    ll ans = 0;
    vector<ll> umap(n+1,0);
    // cout<<"sine";

    set<ll> seen;

    for(i=1;i<n;i++)
    {
        if(umap[arr[i]] == 0 ){
        
            if(arr[i-1]>arr[i]&&umap[arr[i-1]]==0){
                umap[arr[i-1]] = 1;
                ans++;
                // cout<<arr[i-1]<<"arr element ";
                // cout<<ans<<" ans\n";

                
                set<ll>::iterator itr;
                if(seen.begin()!=seen.end()){
                    for (itr = seen.begin();
                        itr != seen.end(); itr++)
                    {
    
                        if(umap[*itr]!=1&&*itr!=0){
                            umap[*itr] = 1;
                        ans++;
                        }
                    }
                    seen = {};
                }
                //                 cout<<arr[i-1]<<"arr element ";
                // cout<<ans<<" ans\n";
            }
            else{
                seen.insert(arr[i-1]);

            }
        }
        else{
            if(arr[i-1]>0&&umap[arr[i-1]]==0){
        
                umap[arr[i-1]] = 1;
                
                ans++;
                // cout<<arr[i-1]<<"arr element ";
                // cout<<ans<<" ans\n";
                set<ll>::iterator itr;
                
                
                // Displaying set elements
                if(seen.begin()!=seen.end()){
                for (itr = seen.begin();itr != seen.end(); itr++)
                {
                    // seen.erase(itr);
                    if(umap[*itr]!=1&&*itr!=0){
                        umap[*itr] = 1;
                        ans++;
                    }
                    
                }
                seen = {};
                }
                //                 cout<<arr[i-1]<<"arr element ";
                // cout<<ans<<" ans\n";
            }
            else{

                seen.insert(arr[i-1]);

            }

        }
    }
    // ans = permute(ans,n);
    cout<<ans<<"\n";
    // cout<<"sioje";
    

  
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
