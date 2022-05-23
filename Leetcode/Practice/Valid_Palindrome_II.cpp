#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool isPalindrome(string s, int start, int end) {
        while(start < end) {
            if(s[start] != s[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int n=s.length();
        int front=0, back=n-1;
        int count_front=0, count_back=0;
        while(front != back) {
            if(s[front] == s[back]) {
                front++;
                back--;
            } else {
                if(isPalindrome(s, front, back-1)) {
                    return true;
                }
                if(isPalindrome(s, front+1, back)) {
                    return true;
                }
                else {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution s;
    string str = "teebbeem";
    if(s.validPalindrome(str)) {
        cout << "true";
    }
    else {
        cout << "false";
    }
    return 0;
}