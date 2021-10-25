#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <vector>
using namespace std;

int main() {
    cout << rand()%5+1 << endl;
    int v = pow(10, 5);
    int n = rand()%v+1;
    int k = rand()%v+1;
    cout << n << " " << k << endl;
    string charges;
    for(int i=0; i<n; i++) {
        charges.push_back(to_string(rand()%2)[0]);
    }
    vector<int> pos;
    for(int i=0; i<k; i++) {
        pos.push_back(rand()%n);
    }
    cout << charges << endl;
    for(int i=0; i<k; i++) {
        cout << pos[i] << " ";
    }
    return 0;
}