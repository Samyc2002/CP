#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    string add(string num1, string num2) {
        string ans="";
        int sum=0, carry=0;
        for(int i=num1.length()-1; i>=0; i--) {
            sum = (num1[i]-'0')+(num2[i]-'0')+carry;
            carry = sum/10;
            sum =sum%10;
            ans += (sum+'0');
        }
        if(carry != 0) {
            ans+=carry+'0';
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    string fixNum(string num, int len) {
        reverse(num.begin(), num.end());
        for(int i=0; i<len; i++) {
            num+='0';
        }
        reverse(num.begin(), num.end());
        return num;
    }
public:
    string addStrings(string num1, string num2) {
        int len1 = num1.length();
        int len2 = num2.length();
        string ans;
        if(len1 == len2) {
            ans = add(num1, num2);
        } else {
            if(len1 < len2) {
                num1 = fixNum(num1, len2-len1);
            } else {
                num2 = fixNum(num2, len1-len2);
            }
            ans = add(num1, num2);
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution s;
    string num1 = "11", num2 = "123";
    cout << s.addStrings(num1, num2) << endl;
    return 0;
}