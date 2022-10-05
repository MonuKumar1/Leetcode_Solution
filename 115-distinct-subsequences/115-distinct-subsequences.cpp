// class Solution {
// public:
// //     int solve(string s, string t,int i,int j,vector<vector<int>>&dp){
// //         if(j<0)return 1;

// //         if(i<0)return 0;
// //         if(dp[i][j]!=-1)return dp[i][j];
        
// //         if(s[i]==t[j]){
// //             return dp[i][j]=solve(s,t,i-1,j,dp)+solve(s,t,i-1,j-1,dp);
// //         }
// //         else{
// //             return dp[i][j]=solve(s,t,i-1,j,dp);
// //         }
// //     }
//     int numDistinct(string s, string t) {
//         int n=s.size(),m=t.size();
//         vector<vector<int>>dp(n,vector<int>(m,-1));
//         return solve(s,t,n-1,m-1,dp);
//     }
// };
class Solution {
public:
    int numDistinct(string s, string t) {
        int mod=1e9+7;
        int n=s.size(),m=t.size();
        vector<vector<long long int>> dp(n+1,vector<long long int>(m+1,0));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(j==0)dp[i][j]=1;
                else if(i==0)dp[i][j]=0;
                else if(s[i-1]==t[j-1])dp[i][j]=(dp[i-1][j]%mod+dp[i-1][j-1]%mod)%mod;
                else dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][m];
    }
};








// class Solution {
// public:
//     void subseq(string p,string up,string t,int &count, vector<vector<int>>&dp)
//     {
//         int m=p.size(),n=up.size();
//         if(up.empty())
//         {
//             if(p==t)
//                 count++;
//              return;
//         }
        
       
//         subseq(p+up[0],up.substr(1),t,count);
//         subseq(p,up.substr(1),t,count);
//     }
//     int numDistinct(string s, string t) {
//         int count=0;
//         int n=size(),m=t.size();
//         string p="";
//         subseq(p,s,t,count,dp);
//         return count;
//     }
    
   
// };
// if(dp[m-1][n-1]!=-1)return dp[m-1][n-1];
// vector<vector<int>>dp(m+1,vector<int>(n+1,-1));

