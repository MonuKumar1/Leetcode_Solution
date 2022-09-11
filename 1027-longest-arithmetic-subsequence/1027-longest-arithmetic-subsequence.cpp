class Solution {
public:

    int longestArithSeqLength(vector<int>& nums) {
        
        int n=nums.size();
        if(n<=2)return n;
        unordered_map<int,int>dp[n+1];
        int ans=0;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                int dif=nums[i]-nums[j];
                int cnt=1;
                if(dp[j].find(dif)!=dp[j].end())
                    cnt=dp[j][dif];
                dp[i][dif]=1+cnt;
                ans=max(ans,dp[i][dif]);
            }
        }
        return ans;
    }
};