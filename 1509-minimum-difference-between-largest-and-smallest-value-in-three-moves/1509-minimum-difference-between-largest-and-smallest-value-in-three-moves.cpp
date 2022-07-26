class Solution {
public:
    int minDifference(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n<=4)return 0;
        int maxi=min({abs(nums[n-3]-nums[1]),abs(nums[n-4]-nums[0]),
                      abs(nums[n-2]-nums[2]),abs(nums[n-1]-nums[3])});
        return maxi;
    }
};