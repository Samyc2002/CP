#include <iostream>
#include <vector>
using namespace std;

int min_pos(int start, int n, vector <int> ar) {
    int min=ar[start];
    int j, f=0;
    for (int i=start+1; i<n; i++) {
        if (ar[i]<min) {
            min = ar[i];
            j = i;
            f = 1;
        }
    }
    if (f==0) {
        j=start;
    }
    // cout << j << endl;
    return j;
}

void reverse(int start, int end, vector <int> &ar) {
    // for (int i=start; i<=end; i++) {
    //     cout << ar[i] << " ";
    // }
    // cout << endl;
    int eff = end-start;
    for (int i=0; i<=eff/2; i++) {
        int t = ar[start+i];
        ar[start+i] = ar[start+eff-i];
        ar[start+eff-i] = t;
    }
    // for (int i=start; i<=end; i++) {
    //     cout << ar[i] << " ";
    // }
    // cout << endl;
}
int calc(int n, vector <int> ar) {
    int c=0;
    for (int i=0; i<n-1; i++) {
        int pos = min_pos(i, n, ar);
        // cout << pos << endl;
        reverse(i,pos,ar);
        c+=(pos-i+1);
    }
    // cout << c << endl;
    return c;
}

int main() {
    int t;
    cin >> t;
    // cout << t;
    vector<int> output;
    for (int i=0; i<t; i++) {
        int n, p;
        vector<int> a;
        cin >> n;
        for (int j=0; j<n; j++) {
            cin >> p;
            a.push_back(p);
        }
        int cost = calc(n,a);
        // cout << cost;
        output.push_back(cost);
    }
    for (int i=0; i<t; i++) {
        cout << "Case #" << i+1 << ": " << output[i] << endl;
    }
    return 0;
}