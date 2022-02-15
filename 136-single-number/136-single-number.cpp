class Solution {
public:
    int singleNumber(vector<int>& nums) {
      map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
         m[nums[i]]++;
            
        }
        for(auto itr=m.begin();itr!=m.end();itr++)
        {if(itr->second==1)
                return itr->first;
        }
        return -1;
    }
};