class Solution {
public:
    
    int solve(vector<int>&v,int curl,int pos,vector<vector<int>>&dp)
    {
        int n=v.size()-1;
        if(n==pos)return 0;
        if(dp[pos][curl]!=-1)return dp[pos][curl];
        
        if(v[pos+1]!=curl){
            return dp[pos][curl]=solve(v,curl,pos+1,dp);
        }
        
        else{
            
            int ans = INT_MAX;
            for(int i=1;i<=3;i++)
            {
                if(curl!=i and v[pos]!=i)
                    ans=min(ans,1+solve(v,i,pos,dp));
            }
            return dp[pos][curl]= ans;
        }
        
        
    }
    
    int minSideJumps(vector<int>& v) {
        
        int n=v.size();
       vector<vector<int>>dp(n+1,vector<int>(4,-1));
       return  solve(v,2,0,dp);
        
    }
};