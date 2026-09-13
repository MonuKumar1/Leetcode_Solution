class Solution {
    int[][] dp;

    int solve(int[] nums, int i, int lad) {
        if (i >= nums.length - 1)
            return 0;

        if (lad == 0 && nums[i] <= 0 )
            return Integer.MAX_VALUE-1001;

        if (dp[i][lad] != -1)
            return dp[i][lad];
        // int lad = nums[i]==
        if(nums[i]==0 && lad>0){
            return solve(nums,i+1,lad-1);
        }
      else  if (lad > 0) {
            return dp[i][lad] = Math.min(
                solve(nums, i + 1, lad - 1),
                1 + solve(nums, i + 1, nums[i]-1)
            );
        } else {
            return dp[i][lad] =
                1 + solve(nums, i + 1, nums[i]-1);
        }
    }

    public int jump(int[] nums) {
        int n = nums.length;

        if (n == 1)
            return 0;

        int ladM = Arrays.stream(nums).max().getAsInt();

        dp = new int[n + 1][ladM + 1];

        for (int[] row : dp)
            Arrays.fill(row, -1);

        return solve(nums, 0, 0);
    }
}