class Solution {
public:
//     int lcs(string s1,string s2,int n,int m)
//     {     
        
//         vector<vector<int>>dp(n+1,vector<int>(m+1,0)) ;
        
//         for(int i=0;i<=n;i++)
//         {
//             for(int j=0;j<=m;j++){
                
//                 if(i==0 || j==0)dp[i][j]=0;
                
//                 else if(s1[i-1]==s2[j-1])
//                     dp[i][j]=max(dp[i][j],1+dp[i-1][j-1]);
//                 else
//                     dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                
//                 if(dp[i][j]==m)return m;

//             }
//         }
//         return dp[n][m];
        
//     }
//     int numMatchingSubseq(string s, vector<string>& words) {
        
//         int ans=0;
//         for(int i=0;i<words.size();i++)
//         {
//             string temp=words[i];
//             if(lcs(s,temp,s.length(),temp.length())==temp.length())ans++;
//         }
//         return ans;
//     }
    int numMatchingSubseq (string S, vector<string>& words) {
		vector<vector<int>> alpha (26);
		for (int i = 0; i < S.size (); ++i) alpha[S[i] - 'a'].push_back (i);
		int res = 0;

		for (const auto& word : words) {
			int x = -1;
			bool found = true;

			for (char c : word) {
				auto it = upper_bound (alpha[c - 'a'].begin (), alpha[c - 'a'].end (), x);
				if (it == alpha[c - 'a'].end ()) found = false;
				else x = *it;
			}

			if (found) res++;
		}

		return res;
	}
};