#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    char s[100];
    cin >> s;
    vector<int> a;
    int n = strlen(s);
    int c=0;
    for (int i=0; i<n; i++) {
        if((i%2)==0) {
            a[c]=s[i];
            c++;
        }
    }
    sort(a.begin(), a.end());
    c=0;
    for (int i=0; i<n; i+=2) {
        s[i] = a[c];
        s[i+1] = '+';
        c++;
    }
    for (int i=0; i<n; i++) {
        cout << s[i];
    }
    return 0;
}