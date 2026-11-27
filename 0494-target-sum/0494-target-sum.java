class Solution {
    public int findTargetSumWays(int[] nums, int target) {
        int total = 0, cntZero = 0;
        List<Integer> lst = new ArrayList<>();
        for (int x : nums) {
            total += x;
            if (x == 0) cntZero++;
            else lst.add(x);
        }

        if (Math.abs(target) > total) return 0;
        if ((total + target) % 2 != 0) return 0;

        int t = (total + Math.abs(target)) / 2;
        int n = lst.size();

        int[][] dp = new int[n + 1][t + 1];
        dp[0][0] = 1;

        for (int i = 1; i <= n; i++) {
            int num = lst.get(i - 1);
            for (int j = 0; j <= t; j++) {
                dp[i][j] = dp[i - 1][j];
                if (j >= num) dp[i][j] += dp[i - 1][j - num];
            }
        }

        return dp[n][t] * (1 << cntZero);
    }
}