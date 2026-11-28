class Solution {
    int dp[];

    int solve(String s, int n) {
        if (n < 0)
            return 1;
        if (dp[n] != -1)
            return dp[n];
        int ans = 0;
        if (n >= 1) {
            if (s.charAt(n - 1) == '1' || (s.charAt(n - 1) == '2' && s.charAt(n) <= '6'))
                ans += solve(s, n - 2);

        }
        if (s.charAt(n) != '0')
            ans += solve(s, n - 1);
        dp[n] = ans;
        return ans;

    }

    public int numDecodings(String s) {
        int n = s.length();

        dp = new int[n + 1];
        Arrays.fill(dp, -1);
        return solve(s, n - 1);
    }
}