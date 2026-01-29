class Solution {
public:
    vector<int> twoSum(vector<int>& nums1, int target) {
        
        unordered_map<int,int>mp;

        for(int i=0;i<nums1.size();i++){
                if(mp.find(target-nums1[i])!=mp.end()){
                    return {i,mp[(target-nums1[i])]};
                }
                mp[nums1[i]] =i;

        }
        return {0,0};
    }
};