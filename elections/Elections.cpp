#include <iostream>
#include <vector>
using namespace std;

int elections(vector<int> a, vector<int> b, int w) {
    int m,n, p, q, j=0, k=0, c=0;
    n = a.size();
    m = b.size();
    int mina=0, maxb=0;
    while(j<=k) {
        for(int i=0; i<n; i++) {
            if(a[i]<mina){
                mina = a[i];
                p = i;
            }
        }
        for(int i=0; i<n; i++) {
            if(b[i]>maxb){
                maxb = b[i];
                q = i;
            }
        }
        int t = a[p];
        a[p] = b[q];
        b[q] = t;
        for(int i=0; i<n; i++) {
            j += a[i];
        }
        for(int i=0; i<n; i++) {
            k += b[i];
        }
        if (c > min(m,n)) {
            return -1;
        }
        else {
            c++;
        }
    }
    return c;
}

int main() {
	int t;
    vector<int> output;
    cin >> t;
    for(int i=0; i<t; i++) {
        int x, y;
        vector<int> a,b;
        cin >> x >> y;
        for(int j=0; j<x; j++) {
            int s;
            cin >> s;
            a.push_back(s);
        }
        for(int j=0; j<y; j++) {
            int s;
            cin >> s;
            b.push_back(s);
        }
        int k = elections(a, b, t);
        output.push_back(k);
    }
    for(int i=0; i<t; i++) {
        cout << output[i] << endl;
    }
	return 0;
}
