class Solution {
public:
    vector<vector<int>>subset;
    void helper(int index, vector<int>&current,vector<int>&nums)
    {
        subset.push_back(current); 
        for(int i=index;i<nums.size();i++)
        {
            current.push_back(nums[i]); 
            helper(i+1,current,nums); 
            current.pop_back(); 
        }
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>current;
        helper(0,current,nums);
        return subset; 
    }
};