class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();
        
        int cur_sum = 0, ans=INT_MIN ;
        for(int i=0;i<n;i++){
            cur_sum+=nums[i];
            if(cur_sum<nums[i])cur_sum=nums[i];
            ans = max(ans, cur_sum);
            
        }
        return ans;
    }
};