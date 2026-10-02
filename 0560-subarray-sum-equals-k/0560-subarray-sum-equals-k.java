class Solution {
    public int subarraySum(int[] nums, int k) {
    Map<Integer,Integer>prefixSumCount = new HashMap<>();
        prefixSumCount.put(0,1) ;
        
        int currentSum = 0;
        int ans = 0;
        
        for (int num : nums) {
            currentSum += num;
            ans += prefixSumCount.getOrDefault(currentSum - k,0);
            prefixSumCount.put(currentSum,prefixSumCount.getOrDefault(currentSum,0)+1);
        }
        
        return ans;
        

    }
}


//sum(A[:j]) = sum(A[:i]) + sum(A[i:j])
//sum(A[:j]) = sum(A[:i]) + k 
//sum(A[:j]) - k = sum(A[:i])
// -1,-1,1
