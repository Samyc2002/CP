#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.length();
        stack<int> st;
        string ans;
        for(int i=0; i<n; i++) {
            ans.push_back(s[i]);
            if(s[i] == '(') {
                st.push(ans.length()-1);
            }
            else if(s[i] == ')') {
                if(st.empty()) {
                    ans.pop_back();
                }
                else {
                    st.pop();
                }
            } 
        }
        while(!st.empty()) {
            ans.erase(st.top(), 1);
            st.pop();
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution s;
    string str = "(a(b(c)d)";
    cout << s.minRemoveToMakeValid(str);
    return 0;
}