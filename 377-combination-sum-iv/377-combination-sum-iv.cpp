class Solution {
public:
   
    int combinationSum4(vector<int>& nums, int target) {
             
        sort(nums.begin(), nums.end());
    
        vector<unsigned long> dp(target + 1, 0);
        
        dp[0] = 1;
        for (int i = 1; i <= target; ++i){
            int ways = 0;
            for (int j = 0; j < nums.size(); ++j){
                int remain = i - nums[j];
                if (remain < 0) break;
                
                ways += dp[remain];
            }
            dp[i] = ways;
        }
        return dp[target];
     
    }
};