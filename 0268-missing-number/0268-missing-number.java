class Solution {
    public int missingNumber(int[] nums) {
        
        int n = nums.length;
        int isZeroPresent = -1;
        boolean zeroVal=false;

        for(int i=0;i<n;i++){
            if(nums[i]==0)isZeroPresent=i;
            if(Math.abs(nums[i])>=n)continue;
            nums[Math.abs(nums[i])] = -nums[Math.abs(nums[i])];
        }

        for(int i=0;i<n;i++){
            System.out.print(nums[i] + " ");
        }      

        
        if(isZeroPresent==-1)return 0;

        for(int i=0;i<n;i++){
            if(Math.abs(nums[i])==isZeroPresent)zeroVal=true;
            if(nums[i]>0)return i;
        }

        if(zeroVal==false)return isZeroPresent;
        return n;
    }
}