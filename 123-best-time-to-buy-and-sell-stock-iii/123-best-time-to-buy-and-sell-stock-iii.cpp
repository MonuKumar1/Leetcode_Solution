class Solution {
public:
    //recursion
    int fun(int ind,int buy,int cap,vector<int>&v,vector<vector<vector<int>>>&dp)
    {
        if(ind>=v.size())return 0;
        if(dp[ind][buy][cap]!=-1)return dp[ind][buy][cap];
        if(cap<=0)return 0;
        
        if(buy){
            return dp[ind][buy][cap]=max(-v[ind]+fun(ind+1,0,cap,v,dp),fun(ind+1,1,cap,v,dp));}
        else
            return dp[ind][buy][cap]=max(v[ind]+fun(ind+1,1,cap-1,v,dp),fun(ind+1,0,cap,v,dp));
        
    }
    int maxProfit(vector<int>& p) {
        
        // vector<int>nums;
        int n=p.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        
        for(int ind=n-1;ind>=0;ind--)
        {
            for(int buy=0;buy<=1;buy++)
            {
                for(int cap=1;cap<=2;cap++)
                {
                    
        if(buy){
            dp[ind][buy][cap]=max(-p[ind]+dp[ind+1][0][cap],dp[ind+1][1][cap]);}
        else
             dp[ind][buy][cap]=max(p[ind]+dp[ind+1][1][cap-1],dp[ind+1][0][cap]);
                }
            }
        }
        int ans=dp[0][1][2];
        return ans;
        
        
    }
};
