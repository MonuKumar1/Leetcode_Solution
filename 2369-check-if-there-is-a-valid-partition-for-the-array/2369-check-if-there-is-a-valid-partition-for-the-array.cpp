class Solution {
public:
  bool validPartition(vector<int>& nums) {
        int n = nums.size();
		vector<int> dp(n,-1);
        return helper(nums, dp, 0, n);
    }
      
    bool helper(vector<int> &nums, vector<int> &dp, int i, int n)
    {
        if(i >= n)
            return true;
        
        if(dp[i] != -1)
            return dp[i];
      
        if(i + 1 < n && nums[i] == nums[i + 1])
        {
			dp[i] = helper(nums, dp, i + 2, n);
            if(dp[i])
                return true;
			
            if(i + 2 < n && nums[i] == nums[i +2])
            {
				dp[i] = helper(nums, dp, i + 3, n);
				if(dp[i])
					return true;
            }
        }
        
 
        if(i + 2 < n && nums[i + 1] - nums[i] == 1 && nums[i+2] - nums[i] == 2)
        {
            dp[i] = helper(nums, dp, i+3, n);
            if(dp[i])
                return true;
        }
        
        dp[i] = 0;
        return false;
        
    }
};