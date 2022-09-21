class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& q) {
        vector<int> v;int sum=0;
        for(auto x:nums)if(x%2==0)sum+=x;
        for(int i=0;i<q.size();i++){
            if(nums[q[i][1]]%2==0)sum-=nums[q[i][1]];
            nums[q[i][1]]+=q[i][0];
            if(nums[q[i][1]]%2==0)sum+=nums[q[i][1]];
           v.push_back(sum);     
        }
        return v;
    }
};