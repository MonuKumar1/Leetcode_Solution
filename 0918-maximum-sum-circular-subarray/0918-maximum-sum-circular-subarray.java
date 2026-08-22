class Solution {
    public int maxSubarraySumCircular(int[] nums) {
        int sum = 0, maxSum = Integer.MIN_VALUE;
        int sum2 = 0, minSum = Integer.MAX_VALUE;
        int tsum=0;
        for (int num : nums) {
            tsum+=num;

            sum+=num;
            maxSum = Math.max(sum,maxSum);
            if(sum<0)sum=0;

            sum2+=num;
            minSum = Math.min(sum2,minSum);
            if(sum2>0)sum2=0;

        }

        if (maxSum < 0) {
            return maxSum;
        }

        return Math.max(maxSum, tsum - minSum);

    }
}