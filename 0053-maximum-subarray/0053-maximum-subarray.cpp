class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        
        int sum=nums[0];
        
        int n=nums.size();
        
        int cur=nums[0];
        int maxi=nums[0];
        for(int i=1;i<n;i++)
        {
            cur=max(cur+nums[i],nums[i]);
            maxi=max(maxi,cur);
            
            
            
        }
        return maxi;
        
        
    }
};