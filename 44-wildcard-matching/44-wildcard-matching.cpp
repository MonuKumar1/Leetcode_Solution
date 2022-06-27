class Solution {
public:
    bool isMatch(string s, string p) {
        
        int n=p.size();
        int m=s.size();
        
        vector<vector<int>>dp(n+1,vector<int>(m+1));
        int k=0;
        
        while(p[k]=='*')
        {
            
                dp[k+1][0]=1;
            k++;
        }
        
        dp[0][0]=1;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if((p[i-1]==s[j-1]||p[i-1]=='?') and (dp[i-1][j-1]==1))
                    dp[i][j]=1;
                else if(p[i-1]=='*')
                {
                    dp[i][j]=dp[i-1][j-1] || dp[i][j-1] || dp[i-1][j];
                    //cout<<dp[i][j]<<dp[i-1][j-1]<<dp[i][j-1]<<dp[i-1][j]<<endl;
                }
                // cout<<dp[i][j]<<" ";
                    
            }
            // cout<<endl;
        }
        
        return dp[n][m];
        
        
        
        
        
        
    }
};