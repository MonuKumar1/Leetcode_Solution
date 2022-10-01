class Solution {
public:
    int numDecodings(string s) {
       
        int n = s.size();
        vector<int> dp(n+1, 0);
        dp[n] = 1;
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] != '0') 
                dp[i] += dp[i+1];
            if (i+1 < s.size() && (s[i] == '1' || s[i] == '2' && s[i+1] <= '6')) // Two digits
                dp[i] += dp[i+2];
        }
        return dp[0];
        
        
        
//         int count=0;
//         int n=s.size();
//         if(s[0]=='0')return 0;
//         for(int i=0;i<n;i++)
//         {
//             if(s[i]-'0'>0 and s[i]-'0'<=9 )
//                 count++;
//         }
        
//         for(int i=1;i<n;i++)
//         {  int num=0;
//             if (  s[i-1]-'0'>0 and s[i-1]<=9 and   s[i]-'0'>0 and s[i]-'0'<=9)
//             {num=(s[i]-'0')  + (s[i-1]-'0');cout<<num<<endl;}
//             if(num>9 and num<=26)count++;
//         }
//         return count;
    }
};