class Solution {
    int[] dp = new int[1000];
    int solve(int []nums, int t, int ind){
        if(ind==nums.length-1)return 0;
    
        int ans = Integer.MIN_VALUE;
        if(dp[ind]!=-1)return dp[ind];
        
        for(int i =ind+1;i<nums.length;i++){
            
            // int temp 
            if(Math.abs(nums[i]-nums[ind])<=t){
               int temp = solve(nums, t, i);
                if(temp != Integer.MIN_VALUE){
                    ans = Math.max(ans, 1 + temp);
                }
            }
        }
        return dp[ind] =ans;
    }
    public int maximumJumps(int[] nums, int target) {
        int ind =1;
        int n = nums.length;
       Arrays.fill(dp,-1);
        int ans =solve(nums,target,0);
      return ans !=Integer.MIN_VALUE?ans:-1;

    }
}