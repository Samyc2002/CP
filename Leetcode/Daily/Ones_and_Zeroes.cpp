#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m+2, vector<int>(n+2, 0));
        vector<pair<int, int>> v;
        for(string x : strs){
            int cnt = count(x.begin(), x.end(), '0');
            v.push_back({cnt, x.size()-cnt});
        }
        for(auto pr : v){
            for(int i=m;i>=0;i--){
                for(int j=n;j>=0;j--){
                    if(i>=pr.first && j>=pr.second){
                        dp[i][j] = max(dp[i][j], 1+dp[i-pr.first][j-pr.second]);
                    }
                }
            }
        }
        return dp[m][n];
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution s;
    vector<string> strs = {"10", "0001", "111001", "1", "0"};
    int m = 5, n = 3;
    cout << s.findMaxForm(strs, m, n) << endl;
    return 0;
}