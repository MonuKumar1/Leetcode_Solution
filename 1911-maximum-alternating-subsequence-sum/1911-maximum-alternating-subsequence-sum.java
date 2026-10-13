class Solution {
    // int ans = 0;
    // boolean solve(int[] nums,int i,int sum1,int sum2,int cnt){
    //     if(i>=nums.length)return false;
    //     ans = Math.max(ans,sum1-sum2);
    //     if(cnt%2==0){ 
    //       solve(nums,i+1,sum1,sum2+nums[i],cnt+1) ;
    //     //  || solve(nums,i+1,sum1,sum2,cnt);
    //     } else return solve(nums,i+1,sum1+nums[i],sum2,cnt+1) ;
    //     //  || solve(nums,i+1,sum1,sum2,cnt);



    // }
    public long maxAlternatingSum(int[] nums) {
        

        long temp=0,res=nums[0];
        for(int i=1;i<nums.length;i++){
            temp=(nums[i]-nums[i-1]);
            if(temp<0)temp=0;
            res += temp;
            

        }


        return res;
        
    }
}