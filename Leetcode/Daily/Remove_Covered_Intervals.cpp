class Solution {
    public:
        int removeCoveredIntervals(vector<vector<int>>& x) {
            int n = x.size();
            if(n <= 1)return n;
            sort(x.begin(), x.end());
            int ans = 1;
            int l = x[0][0], r = x[0][1];
            for(int i = 1; i < n; i++){
                if(x[i][1] > r) {
                    if(x[i][0] > l) {
                        l = x[i][0]; 
                        ans++;
                    }
                    r = x[i][1];
                }
            }
            return ans;
        }
};