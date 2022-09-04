// class Solution {
// public:
//     int fun(string s,int n,int k)
//     {
//         if(n<0)
//             return 0;
//         int taken=0,not_taken=0;
//         if(n>0 and abs(s[n]-s[n-1])<=k)
//             taken=1+fun(s,n-2,k);
//          not_taken=fun(s,n-1,k);
        
//         return max(taken,not_taken);
        
        
        
//     }
//     int longestIdealString(string s, int k) {
        
//         return fun(s,s.size(),k);
        
//     }
// };
class Solution {
public:
    int solve(string& s,int index,int prev,int &k,vector<vector<int>>& dp){
        if(index>=s.size())return 0;
        
        if(dp[index][prev]!=-1)return dp[index][prev];
        
        int inc=0,notinc=0;
        if(prev==0 || abs(s[index]-prev)<=k){
            inc=1+solve(s,index+1,s[index],k,dp);
        }
        notinc=solve(s,index+1,prev,k,dp);
        
        return dp[index][prev]=max(inc,notinc);
    }
    
    int longestIdealString(string s, int k) {
        vector<vector<int>>dp (s.size()+1,vector<int>(150,-1));
        return solve(s,0,0,k,dp);
    }
};