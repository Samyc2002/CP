#include<iostream>
using namespace std;

void calc(int n, int &a, int &b) {
    if (a >= b) {
        a = a/2;
        cout << "A" << n << " is " << b << "x" << a << endl;
    }
    else {
        b = b/2;
        cout << "A" << n << " is " << a << "x" << b << endl;
    }
}

int main() {
    int m = 1189, n = 841;
    cout << "A0 is " << m << "x" << n << endl;
    calc(1,m,n);
    calc(2,m,n);
    calc(3,m,n);
    calc(4,m,n);
    calc(5,m,n);
    calc(6,m,n);
    calc(7,m,n);
    calc(8,m,n);
    return 0;    
}