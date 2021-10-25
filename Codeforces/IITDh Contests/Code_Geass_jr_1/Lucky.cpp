#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int r=1, p=0, c=0; 
    while (r!=0) {
        p=n%10;
        r=n/10;
        if ((p==4)||(p==7)) {
            c++;
        }
    }
    if ((c==4)||(c==7)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}