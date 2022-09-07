class Solution {
public:
  int fun(int ind,int buy,vector<int>&v,vector<vector<int>>&dp)
    {
        if(ind>=v.size())return 0;
        if(dp[ind][buy]!=-1)return dp[ind][buy];
        
        if(buy){
            return dp[ind][buy]=max(-v[ind]+fun(ind+1,0,v,dp),fun(ind+1,1,v,dp));}
        else
            return dp[ind][buy]=max(v[ind]+fun(ind+2,1,v,dp),fun(ind+1,0,v,dp));
        
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,-1));
         
        int ans=fun(0,1,prices,dp);
        return ans;
    }
};