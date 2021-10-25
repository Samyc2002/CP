#include <iostream>
using namespace std;

int gcd(int a,int b){
    if(a==0)
    return a;
    if(b==0)
    return b;
    if(a==b)
    return a;
    if(a>b)
    gcd(a-b,b);
    gcd(a,b-a);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int h;
    gcd(a,b);
     
    return 0;
}