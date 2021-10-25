#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b) {
    int t = a;
    a = b; 
    b = t;
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

void calc(int n, int c, vector<int> &ar) {
    
}

int main() {
    int t;
    vector<vector <int>> output;
    cin >> t;
    for (int i=0; i<t; i++) {
        int n, cost;
        vector<int> a;
        cin >> n >> cost;
        for (int j=0; j<n; j++) {
            a.push_back(j+1);
        }
        int result;
        int min_cost = (n-1);
        int max_cost = n*(n+1)/2;
        if (cost<=max_cost && cost>=min_cost) {
            calc(n, cost, a);
            result = 1;
        }
        else {
            result = -1;
        }
        if (result==-1) {
            vector <int> r;
            r.push_back(result);
            output.push_back(r);
        }
        else {
            output.push_back(a);
        }
    }
    
    for (int i=0; i<t; i++) {
        vector <int> compare{-1};
        if (output[i]==compare) {
            cout << "Case #" << i+1 << ": IMPOSSIBLE" << endl;
        }
        else {
            cout << "Case #" << i+1 << ": ";
            for (int j=0; j<output[i].size(); j++) {
                cout << output[i][j] << " ";
            }
            cout << endl;
        }
    }
}