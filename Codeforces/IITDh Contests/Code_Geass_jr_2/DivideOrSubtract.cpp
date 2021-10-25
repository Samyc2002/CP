#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(cin>>n)
    cout<<(n<4?n-1:2+n%2)<<' ';
    return 0;
}