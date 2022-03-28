class Solution {
public:
    bool search(vector<int>& nums, int target) {
    
        unordered_map<int,int>mp;
        for(auto x:nums)mp[x]++;
        
        if(mp.find(target)!=mp.end())
            return true;
        return false;
    
    }
};