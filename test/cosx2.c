#include<stdio.h>

const long double PI = 3.1415926535897932384626433832795;

float terms(float x, int n) {
    if(n == 0) {
        return 1;
    }
    return ((-1*x*x)/(n*(n-1)))*terms(x, n-2);
}

int main() {
    float x, n;
    scanf("%f %f", &x, &n);
    x = PI*x/180;
    float cosx = terms(x, 0);
    float term = terms(x, 0);
    int i = 2;
    while(term > n) {
        cosx += terms(x, i);
        term = terms(x, i);
        term = (term < 0) ? (-1*term) : (term);
        i += 2;
    }
    printf("%f", cosx);
    return 0;
}