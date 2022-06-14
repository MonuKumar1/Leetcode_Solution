class Solution {
public:
    int lcs (string s1,string s2,int m,int n)
    {int dp[m+1][n+1];
        memset(dp,0,sizeof(dp));
        if(m==0|| n==0)return 0;
        for(int i=1;i<=m;i++)
        { 
            for(int j=1;j<=n;j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
    
    int minDistance(string word1, string word2) {
     int x=lcs(word1,word2,word1.size(),word2.size());
        int ans=(word1.size()+word2.size())- (2*x);
        return ans;
        
        
    }
};