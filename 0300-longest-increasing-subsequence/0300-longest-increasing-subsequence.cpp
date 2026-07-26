class Solution {
public:
    vector<vector<int>>dp;
    int solve(vector<int>& nums, int i, int taken) {
        if (i >= nums.size()) return 0;
        if(dp[i][taken+1]!=-1)return dp[i][taken+1];    


        int skip = solve(nums, i + 1,taken);
        
        int take = 0;
        if (taken==-1 || nums[i] > nums[taken]) {
            take = 1 + solve(nums, i + 1, i);
        }
        
        return dp[i][taken+1]=max(take, skip);
    }
    
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        
        dp.assign(n+1,vector<int>(n+1,-1));

        return solve(nums, 0, -1);
    }
};