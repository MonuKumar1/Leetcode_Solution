class Solution {
    public int lastStoneWeightII(int[] nums) {
int total = 0;
        for (int x : nums) total += x;

        int n = nums.length;
        int[][] dp = new int[n + 1][total + 1];

        for (int i = 0; i <= n; i++) {
            dp[i][0] = 1;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= total; j++) {

                if (nums[i - 1] <= j) {
                    dp[i][j] = Math.max(dp[i - 1][j - nums[i - 1]] , dp[i - 1][j]);
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        int ans = Integer.MAX_VALUE;

        for (int i = 0; i <= total / 2; i++) {
            if (dp[n][i]!=0) {
                ans = Math.min(ans, total - 2 * i);
            }
        }

        return ans;

        

    }
}

