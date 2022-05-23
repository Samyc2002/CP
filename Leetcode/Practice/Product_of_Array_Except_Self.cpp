class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pp(n), inversePp(n);
        pp[0] = nums[0];
        for(int i=1; i<n; i++) {
            pp[i] = pp[i-1]*nums[i];
        }
        inversePp[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--) {
            inversePp[i] = inversePp[i+1]*nums[i];
        }
        vector<int> ans(n);
        for(int i=0; i<n; i++) {
            if(i==0) {
                ans[i] = inversePp[i+1];
            } else if(i==n-1) {
                ans[i] = pp[i-1];
            } else {
                ans[i] = pp[i-1]*inversePp[i+1];
            }
        }
        return ans;
    }
};