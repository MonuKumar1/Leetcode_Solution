class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st(nums.begin(),nums.end());
        int n=st.size();
        nums.resize(n);
            int i=0;
            for(auto it=st.begin();it!=st.end();it++)
            {
                nums[i]=*it;
                i++;
            }
        return n;
    }
};