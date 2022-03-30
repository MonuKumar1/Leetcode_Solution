class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n=nums.size();
        
        int maxi_sum=nums[0];
        int cur_sum=nums[0];
        
        for(int i=1;i<n;i++)
        {
          cur_sum=max(cur_sum+nums[i],nums[i]);
            maxi_sum=max(maxi_sum,cur_sum);
            if(cur_sum<0)cur_sum=0;

        }
        return maxi_sum;
    }
};