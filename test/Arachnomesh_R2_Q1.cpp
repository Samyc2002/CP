// Find the counts of elements of an unsorted integer array which are equal to the average of all elements of that array.
#include<bits/stdc++.h>
using namespace std;

void getAverageCountArray(vector<int> a) {
    int mean_int = accumulate(a.begin(), a.end(), 0)/a.size();
    float mean_float = (float)((float)(accumulate(a.begin(), a.end(), 0))/(float)(a.size()));
    if(mean_float-(float)mean_int != 0) {
        cout << 0;
        return;
    }
    int count = 0;
    int mean = mean_int;
    for(int i=0; i<a.size(); i++) {
        if(a[i]==mean) {
            count++;
        }
    }
    cout << count;
}

int main() {
    vector<int> a = { 2, 0, 4, 6, 2 };
    getAverageCountArray(a);
    return 0;
}