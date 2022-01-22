class Solution {
       
public:
 // vector<bool>dp(100001,0);
    bool dp[100001];
    bool winnerSquareGame(int n) {
        if(n==0)return false;
        
        if(dp[n]!=NULL) return dp[n];
        int flag=0;
        for(int i=1;i*i<=n;i++)
        {
            if(winnerSquareGame(n-i*i)==false)
            {
                dp[n]=1;
                break;
                
                // return true;
            }
                
        }
    
        return dp[n];
        
        
    }
};