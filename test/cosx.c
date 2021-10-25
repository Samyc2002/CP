#include<stdio.h>

const long double PI = 3.1415926535897932384626433832795;

float terms(float x, int n) {
    if(n == 0) {
        return 1;
    }
    return ((-1*x*x)/(n*(n-1)))*terms(x, n-2);
}

float method1(float x, int n) {
    x = PI*x/180;
    float cosx=0;
    for(int i=0; i<=n; i+=2) {
        cosx += terms(x, i);
    }
    return cosx;
}

float method2(float x, float n) {
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
    return cosx;
}

int main() {
    float x, min_value;
    int max_terms;
    printf("Enter x, number of terms, minimum value respectively\n");
    scanf("%f %d %d", &x, &max_terms, &min_value);
    printf("cosx calculated from method 1 is: %f\n", method1(x, max_terms));
    printf("cosx calculated from method 2 is: %f", method2(x, min_value));
    return 0;
}