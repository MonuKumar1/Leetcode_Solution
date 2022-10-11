class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
             int mini=INT_MAX;
             int mid=INT_MAX;
            for(int i=0;i<nums.size();i++)
            {
                if(mini>nums[i])
                    mini=nums[i];
                else if(nums[i]>mini)
                {
                    if(nums[i]>mid)
                        return true;
                    mid=nums[i];
                }
            }
        return false;
        
    }
};