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
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,-1)));
        int ans=fun(0,1,2,p,dp);
        return ans;
        
        
    }
};
