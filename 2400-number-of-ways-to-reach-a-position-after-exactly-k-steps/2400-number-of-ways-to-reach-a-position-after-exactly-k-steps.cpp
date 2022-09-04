class Solution {
public:
    
int mod;
   long long int  fun(int steps,int rev,vector<vector<long long int>>&dp)
    {
        if(steps<0 || rev<0 )return 0;
        if(steps==0 || rev==0){
           return dp[steps][rev]=1; }
        if(dp[steps][rev]!=-1)return dp[steps][rev];
        else return dp[steps][rev]=(1ll*fun(steps-1,rev,dp)+1ll*fun(steps,rev-1,dp))%mod;
       
    }
    int numberOfWays(int s, int e, int k) {
      mod=1e9+7;
       int dis=e-s;
        if(dis>k)return 0;
        int rev=k-dis;
        if(rev%2)return 0;
        rev/=2;
        vector<vector<long long int>>dp(k-rev+1,vector<long long int>(rev+1,-1));
        for(int i=0;i<k-rev+1;i++){
            for(int j=0;j<rev+1;j++){
                if(i==0 || j==0){
                    dp[i][j]=1;
                }
                else dp[i][j]=(1ll*dp[i][j-1]+1ll*dp[i-1][j])%mod;
            }
        }
        return dp[k-rev][rev];
        
        
    }
};