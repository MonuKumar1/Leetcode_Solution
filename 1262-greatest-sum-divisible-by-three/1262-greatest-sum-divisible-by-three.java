class Solution {

    int solve(int[] nums, int i, int rem, int[][] dp) {
        if (i < 0) {
            if (rem == 0) return 0;
            return Integer.MIN_VALUE;
        }

        if (dp[i][rem] != -1) return dp[i][rem];

        // Don't take
        int notTake = solve(nums, i - 1, rem, dp);

        // Take
        int take = nums[i] + solve(nums, i - 1, (rem - nums[i] % 3 + 3) % 3, dp);

        return dp[i][rem] = Math.max(take, notTake);
    }

    public int maxSumDivThree(int[] nums) {

        int n = nums.length;
        int[][] dp = new int[n][3];

        for (int[] row : dp)
            Arrays.fill(row, -1);

        return solve(nums, n - 1, 0, dp);
    }
}