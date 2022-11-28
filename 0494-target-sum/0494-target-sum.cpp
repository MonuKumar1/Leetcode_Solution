class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        int n=nums.size();
        for(int x:nums)sum+=x;
        if((sum+target)%2!=0) return 0;
        
        int m=(sum+target)/2;
        
        int ans=helper(nums,m,n);
       return ans;
    }
    int helper(vector<int>nums,int t,int n)
    {
        t=abs(t);
        int dp[n + 1][t + 1];
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= t; j++)
            {
                if(i == 0)
                    dp[i][j] = 0;
                if(j == 0)
                    dp[i][j] = 1;
            }
        }
        
        for(int i = 1; i <= n; i++)
        {
            for(int j = 0; j <= t; j++)
            {
                if(nums[i - 1] <= j)
                 dp[i][j] = dp[i - 1][j - nums[i - 1]] + dp[i - 1][j];
                else
                  dp[i][j] = dp[i - 1][j];
            }
        }
        
        return dp[n][t];
        
    }
};