class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
        vector<bool>dp(s.size(),false);
        dp[0]=true;
        
        for(int i = 0; i <= s.size(); i++)
        {
            for(auto str: wordDict)
            {
                if(dp[i])
                {
                    if(s.substr(i,str.size())==str)
                    {
                        dp[i+str.size()]=true;
                    }
                }
            }
        }
        for(auto x:dp)cout<<x<<" ";
        return dp[s.size()];
    }
};