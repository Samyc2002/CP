#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    vector<vector<int>> dp;

    int solve(vector<int>& coins, int amount, int n) {
        if(n==0 || amount==0) {
            return amount == 0 ? dp[n][amount]=0 : dp[n][amount]=1e9;
        }
        if(dp[n][amount] != -1) {
            return dp[n][amount];
        }
        if (coins[n - 1] <= amount) {
            return dp[n][amount]=min(1+solve(coins, amount-coins[n-1], n), solve(coins, amount, n-1));
        } else {
            return dp[n][amount]=solve(coins, amount, n-1);
        }
    }

public:

    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        dp.resize(n+1, vector<int>(amount+1, -1));
        int ans = solve(coins, amount, n);
        return ans == 1e9 ? -1 : ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution s;
    vector<int> coins = { 463,351,30,129,434,91,120,205,205 };
    int amount = 4863;
    cout << s.coinChange(coins, amount) << endl;
    return 0;
}

/*
[463,351,30,129,434,91,120,205,205]
4863
*/