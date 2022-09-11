class Solution {
public:
  int fun(int i,int j,int turn,vector<int>&v,vector<vector<vector<int>>>&dp)
    {
        if( i==j )
        {if( turn ) return dp[i][j][turn]= v[i];
            return  dp[i][j][turn]= - v[j];
        }
      if(dp[i][j][turn]!=-1)return dp[i][j][turn];
      
        if(turn) return dp[i][j][turn]=max(v[i]+fun(i+1,j,0,v,dp),v[j]+fun(i,j-1,0,v,dp));
      
    return dp[i][j][turn]=max(-v[i]+fun(i+1,j,1,v,dp),-v[j]+fun(i,j-1,1,v,dp));
        
    }
    
    
    
    bool stoneGame(vector<int>& v) {
        int n = v.size();
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(n+1, vector<int>(2, -1)));
         int ans=fun(0,v.size()-1,1,v,dp);
        return ans>=0;
    }
};