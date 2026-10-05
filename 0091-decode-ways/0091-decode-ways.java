class Solution {
    int dp[];
   int solve(String s, int i){
        if(i<0)return 1;
        int opt2=0;
        if(dp[i]!=-1)return dp[i];
        if(i>0 ) {
            if((s.charAt(i-1)-'0'==1 && s.charAt(i)-'0'<=9) || 
                (s.charAt(i-1)-'0'==2 && s.charAt(i)-'0'<=6))
            opt2 = solve(s,i-2);
        }
        int opt1 =0;
        if(s.charAt(i)>'0' && s.charAt(i)<='9') opt1 = solve(s,i-1);
       return dp[i]=opt1+opt2;
    }

    public int numDecodings(String s) {
        dp = new int[s.length()+1];
        Arrays.fill(dp,-1);
        return solve(s,s.length()-1);

    }
}