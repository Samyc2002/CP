#include <iostream>
#include <vector>
using namespace std;

int calc_min(int x, int y) {
    if (x<y) {
        return x;
    }
    else {
        return y;
    }
}

int firstJ(int n, int x, int y, vector<int> val, int i, int c) {
    if (val[i+1] == 1) {
        /*Do Nothing*/
    }
    else if (val[i+1] == 0) {
        c+=y;
    }
    else {
        int m, t=i+1;
        while(true) {
            if (val[t]==-1) {
                t++;
                m = val[t];
            }
            else {
                break;
            }
        }
        t = t-i+1;
        if (m == 1) {
            for (int j=(i+1); j<(i+t); j++) {
                val[j] = 1;
            }
        }
        else {
            for (int j=(i+1); j<(i+t); j++) {
                val[j] = 1;
            }
            c+=y;
        }
    }
    return c;
}

int firstC(int n, int x, int y, vector<int> val, int i, int c) {
    if (val[i+1] == 0) {
        /*Do Nothing*/
    }
    else if (val[i+1] == 1) {
        c+=x;
    }
    else {
        int m, t=i+1;
        while(true) {
            if (val[t]==-1) {
                t++;
                m = val[t];
            }
            else {
                break;
            }
        }
        t = t-i;
        if (m==1) {
            for (int j=(i+1); j<(i+t); j++) {
                val[j] = 0;
            }
            c+=x;
        }
        else {
            for (int j=(i+1); j<(i+t); j++) {
                val[j] = 0;
            }
        }
    }
    return c;
}

int first(int n, int x, int y, vector<int> val, int i, int c) {
    if (i!=0) {
        int l = val[i-1];
        int m, t=i;
        while (true) {
            if (val[t]==-1) {
                t++;
                m = val[t];
            }
        }
        t = t-i;
        if (l==0 && m==0) {
            for (int j=i; j<(i+t); j++) {
                val[j] = 0;
            }
        }
        else if (l==0 && m==1) {
            for (int j=i; j<(i+t); j++) {
                val[j] = 0;
            }
            c+=x;
        }
        else if (l==1 && m==0) {
            for (int j=i; j<(i+t); j++) {
                val[j] = 1;
            }
            c==y;
        }
        else {
            for (int j=i; j<(i+t); j++) {
                val[j] = 1;
            }
        }
    }
    else {
        int m, t=i;
        while (true) {
            if (val[t]==-1) {
                t++;
                m = val[t];
            }
        }
        t = t-i;
        if (m == 1) {
            for (int j=i; j<(i+t); j++) {
                val[j] = 1;
            }
        }
        else {
            for (int j=i; j<(i+t); j++) {
                val[j] = 0;
            }
        }
    }
    return c;
}

int calc(int n, int x, int y, vector<int> val) {
    int c=0;
    for (int i=0; i<n-1; i++) {
        if (val[i] == 1) {
            c+=firstJ(n, x, y, val, i, c);
        }
        else if (val[i] == 0) {
            c+=firstC(n, x, y, val, i, c);
        }
        else {
            c+=first(n, x, y, val, i, c);
        }
    }
    return c;
}

int main() {
    int t;
    cin >> t;
    vector<int> output;
    for (int i=0; i<t; i++) {
        string s;
        vector<int> val;
        int x, y, p;
        cin >> x >> y >> s;
        int n = s.length();
        cout << n << endl;
        cout << s << endl;
        for (int j=0; j<n; j++) {
            if (s[j]=='C') {
                val.push_back(0);
            }
            else if(s[j]=='J') {
                val.push_back(1);
            }
            else {
                val.push_back(-1);
            }
        }
        for (int j=0; j<n; j++) {
            cout << val[j] << " ";
        }
        cout << endl;
        int copyright = calc(n, x, y, val);
        output.push_back(copyright);
    }
    for (int i=0; i<t; i++) {
        cout << "Case #" << i+1 << ": " << output[i] << endl;
    }
    return 0;
}