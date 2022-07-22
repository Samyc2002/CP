#include <bits/stdc++.h>

using namespace std;

#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.rend(), cont.rbegin()
#define PB push_back
#define PI 3.1415926535897932384626433832795
#define endl "\n"
typedef long int l;
typedef unsigned long int ul;
typedef long long int ll;
typedef unsigned long long int ull;

void solve() {
    string s;
    cin >> s;

    if (s == "??") {
        cout << "YES" << endl;
        return;
    }

    stack<char> st;
    for (ll i = 0; i < s.length(); i++) {
        if (s[i] != ')') {
            st.push(s[i]);
        } else {
            st.pop();
        }
    }

    if (st.empty()) {
        cout << "YES" << endl;
        return;
    }

    while (!st.empty()) {
        char c1 = st.top();
        st.pop();
        char c2 = st.top();
        st.pop();

        if ((c1 == '?' && c2 == '?') || (c1 == ')' && c2 == '?')) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
