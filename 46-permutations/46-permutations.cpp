class Solution {
public:
    vector<vector<int>> ans;
   void helper(vector<int>&nums,vector<int>&v)
        {
            if(v.size()==nums.size())
            {
                ans.push_back(v);
                return;
            }
            for(int i=0;i<nums.size();i++)
            {
                if(find(v.begin(),v.end(),nums[i])==v.end())
                {
                    v.push_back(nums[i]);
                    helper(nums,v);
                    v.pop_back();
                }
                else{
                    continue;
                }
            }
            return;
        }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>v;
        helper(nums,v);
        return ans;
    }
};