class Solution {
    // int solve(String s,List<String>words,int i){

    //     if(i>=s.length())return 0;

    //     for(int k=i;k<s.length();k++){
    //         String str = s.substr(i,k-i);
    //         if(words.get(str)){
    //           return  solve(s,words,k) || solve(s,words,1);
    //         }
    //     }

    // }
    public boolean wordBreak(String s, List<String> wordDict) {

        boolean[] dp = new boolean[s.length() + 1];
        dp[0] = true;
        for (int i = 0; i <= s.length(); i++) {

            if (!dp[i])continue;

            for (String x : wordDict){
                    if(i+x.length()>s.length())continue;
                    if (s.substring(i, i+x.length()).equals(x)) {
                        dp[i + x.length()] = true;
                    }
            }
        }
        return dp[s.length()];

    }
}