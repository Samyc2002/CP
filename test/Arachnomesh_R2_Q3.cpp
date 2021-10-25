//  Find the average of largest and smallest numbers in an unsorted integer array.
#include<bits/stdc++.h>
using namespace std;

float avg(vector<int> a) {
    sort(a.begin(), a.end());
    float sum=(float)a[0];
    int count=2;
    int i=0;
    while(a[i+1]==a[i]) {
        sum += (float)a[i+1];
        count++;
        i++;
    }
    i=a.size()-1;
    sum+=a[i];
    while(a[i-1]==a[i]) {
        sum += (float)a[i-1];
        count++;
        i--;
    }
    return (float)((float)sum/(float)count);
}

int main() {
    cout << "Sample 1" << endl;
    vector<int> a = { 1, 4, 3, 2 };
    cout << (float)avg(a) << endl;
    cout << "Sample 2" << endl;
    vector<int> b = { 1, 4, 3, 4 };
    cout << (float)avg(b) << endl;
    return 0;
}