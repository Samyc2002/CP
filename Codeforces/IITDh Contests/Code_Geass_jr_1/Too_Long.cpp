#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    string str[t];
    for (int i=0; i<t; i++) {
        string s;
        cin >> s;
        int n = s.size();
        if (n>10) {
            str[i] = s[0]+(n-2)+s[n-1];
        }else {
            str[i] = s;
        }
    }
    for (int i=0; i<t; i++) {
        cout << str[i] << endl;
    }
    return 0;
}