class Solution {
public:
    string longestPalindrome(string s) {
        
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        string ans="";
        ans+=s[0];
        for(int i=0;i<n;i++)dp[i][i]=1;
        
        for(int i=n-2;i>=0;i--)
        {
            for(int j=i+1;j<n;j++)
            {
                if((s[i]==s[j]) and (dp[i+1][j-1]==1||(i+1==j)))
                    {
                    dp[i][j]=1;
                    if(j-i+1>=ans.size())
                        ans=s.substr(i,j-i+1);
                }
                else
                    dp[i][j]=0;
            }
        }
        
        return ans;
        
    }
};