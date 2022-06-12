class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        
        int n=nums.size();
        
        int sum=0;
        int maxi=0;
        unordered_map<int,int>mp;
        int start=0;
        for(int i=0;i<n;i++)
        {
            
            while(mp[nums[i]]>0)
            {
                mp[nums[start]]--;
                sum-=nums[start];
                start++;
            }
            
            sum+=nums[i];
            
            mp[nums[i]]++;
            maxi=max(sum,maxi);
            
        }
        return maxi;
        
    }
};