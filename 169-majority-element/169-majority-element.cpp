class Solution {
public:
    int majorityElement(vector<int>& nums) {
     map<int,int> m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        float n=nums.size()/2;
        for(auto itr=m.begin();itr!=m.end();itr++)
        {
            if((itr->second)>ceil(nums.size()/2))
                return itr->first;
            
        }
            return -1;
    }
};