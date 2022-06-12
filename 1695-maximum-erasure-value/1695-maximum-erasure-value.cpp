class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        int n=nums.size();
        
         unordered_map<int,int>mp;
        int maxi=0,sum=0,start=0;
        for(int i=0;i<n;i++)
        {
            while(mp[nums[i]]>0)
            {
                sum-=nums[start];
                mp[nums[start]]=0;
                start++;
            }
           mp[nums[i]]++;
            sum+=nums[i];
            maxi=max(maxi,sum);
            
        }
        return maxi;
        
    }
};