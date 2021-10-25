#include<stdio.h>

const long double PI = 3.1415926535897932384626433832795;

float terms(float x, int n) {
    if(n == 0) {
        return 1;
    }
    return ((-1*x*x)/(n*(n-1)))*terms(x, n-2);
}

int main() {
    int n;
    float x;
    scanf("%f %d", &x, &n);
    x = PI*x/180;
    float cosx=0;
    for(int i=0; i<=n; i+=2) {
        cosx += terms(x, i);
    }
    printf("%f", cosx);
    return 0;
}