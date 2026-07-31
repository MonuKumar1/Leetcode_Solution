class Solution {
    int solve(int[] nums, int target,Integer[] dp) {
        if (target == 0)
            return 1;
         if (target < 0)
            return 0;
            if(dp[target]!=null)return dp[target];
        int count = 0;
        for (int k = 0; k < nums.length; k++) {

            count += solve(nums, target-nums[k],dp);

        }

        return dp[target]=count;

    }

    public int combinationSum4(int[] nums, int target) {
        Integer dp[] = new Integer[target+1];
        return solve(nums, target,dp);
    }
}