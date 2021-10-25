#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = { 1, 2, 3 };
    cout << a.size();
    a.push_back(4);
    cout << a.size();
    return 0;
}