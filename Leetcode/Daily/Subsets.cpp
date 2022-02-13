class Solution {
    private:
        void solve(vector<int>&nums,int n,vector<int>&temp,vector<vector<int>>&ans) {
        if(n==0) {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[n-1]);
        solve(nums,n-1,temp,ans);
        temp.pop_back();
        solve(nums,n-1,temp,ans);
        
    }
        
    public:
        vector<vector<int>> subsets(vector<int>& nums) {
            int n=nums.size();
            vector<vector<int>>ans;
            vector<int>temp;
            solve(nums,n,temp,ans);
            return ans;
            
        }
};