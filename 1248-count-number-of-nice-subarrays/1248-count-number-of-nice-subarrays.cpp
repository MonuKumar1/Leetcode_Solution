class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        int n=nums.size();
        for(auto &x:nums)
        {
            if(x&1)x=1;
            else x=0;
        }
        int sum=0;
        map<int,int>mp;
        mp[0]=1;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            
            if(mp.find(sum-k)!=mp.end())
                cnt+=(mp[sum-k]);
            mp[sum]++;
                
        }
        return cnt;
    }
};