class Solution {
public:
    int rob(vector<int>& nums) {
        
        // int sum1
        
    int n=nums.size();
         if(n==1)return nums[0];
        // if(n==2)return max(nums[0],nums[1]);
            
        
        vector<int>nums1,nums2;
        nums1=nums;nums2=nums;
        nums1[0]=0;
        nums=nums1;
    vector<int>dp(n,0);
        dp[0]=nums[0];
        if(n>1)dp[1]=max(nums[0],nums[1]);
        
        for(int i=2;i<=n-1;i++)
        {
            dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
        }
        
        int ans1=dp[n-1];
        nums=nums2;
        nums[n-1]=0;
    
        dp[0]=nums[0];
        if(n>1)dp[1]=max(nums[0],nums[1]);
        
        for(int i=2;i<=n-1;i++)
        {
            dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
        }
        int ans2=dp[n-1];
        return max(ans1,ans2);
        
        
 
//     
    }
};