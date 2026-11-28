class Solution {
   int dp[];
    int solve(int[] nums,int target){
        if(target==0){
            return 1;
        }
        if(target<0)return 0;
        if(dp[target]!=-1)return dp[target];
        int count=0;
        for(int i=0;i<nums.length;i++){
            
         count+=solve(nums,target-nums[i]);
           
        }
        return dp[target]=count;
    }

    public int combinationSum4(int[] candidates, int target) {
        dp=new int[target+1];
        Arrays.fill(dp,-1);
       return solve(candidates,target);
     
}
}