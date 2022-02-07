class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    
        // vector<int>v;
        map<int,int>m;
        int n=nums.size();
        for(int x:nums)m[x]++;
        int i=0;
        for(auto &x:m)
        
        {
            if(x.second>1)
            {
                nums[i]=x.first;
                nums[i+1]=x.first;
                i++;
            }
            if(x.second==1)
            {
                nums[i]=x.first;
            }
            i++;
        }
        return i;
    }
};