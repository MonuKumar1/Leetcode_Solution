class Solution {
public:
    int maxProfit(int k, vector<int>& p) {
        int n=p.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(k+1,0)));
        
        for(int ind=n-1;ind>=0;ind--)
        {
            for(int buy=0;buy<=1;buy++)
            {
                for(int cap=1;cap<=k;cap++)
                {
                    
        if(buy){
            dp[ind][buy][cap]=max(-p[ind]+dp[ind+1][0][cap],dp[ind+1][1][cap]);}
        else
             dp[ind][buy][cap]=max(p[ind]+dp[ind+1][1][cap-1],dp[ind+1][0][cap]);
                }
            }
        }
        int ans=dp[0][1][k];
        return ans;
        
        
    } 
    
};