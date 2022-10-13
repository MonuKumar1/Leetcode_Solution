class Solution {
public:
     vector<vector<int>>v;
   
    void solve(vector<int>nums,int ind,int n)
    {
        if(n==ind ){
           if(find(v.begin(),v.end(),nums)==v.end()) v.push_back(nums);return;
        }
            
        for(int i=ind;i<n;i++)
        {
            swap(nums[i],nums[ind]);
            solve(nums,ind+1,n);    
        }
        
        
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
       int n=nums.size();
        
        solve(nums,0,n);
        return v;
    }
};