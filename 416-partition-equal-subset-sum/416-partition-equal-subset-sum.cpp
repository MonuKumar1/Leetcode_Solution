class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int sum=0,sum2=0;
        for(int x:nums)
            sum+=x;
        if(sum%2==1)return false;
        
        int target=sum/2;
        
        int dp[n+1][target+1];
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=target;j++)
            {
                if(i==0)dp[i][j]=0;
                else if(j==0)dp[i][j]=1;
                else if(nums[i-1]<=j)
                {
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j-nums[i-1]]);
                }
                else 
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][target];
    }
     
   
  
};