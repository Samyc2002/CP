#include<iostream>
using namespace std;
int n,a,c,x,m,r=-1;
main(){
cin>>n;
while(n--)cin>>a,c+=a,x+=1-a*2,r=max(r,x-m),m=min(x,m);
cout<<r+c;}
