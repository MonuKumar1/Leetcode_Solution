class Solution {
public:
    vector<vector<int>>v;
   
    void solve(vector<int>nums,int ind,int n)
    {
        if(n==ind){
            v.push_back(nums);
        }
            
        for(int i=ind;i<n;i++)
        {
            swap(nums[i],nums[ind]);
            solve(nums,ind+1,n);    
        }
        
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        int n=nums.size();
        
        solve(nums,0,n);
        return v;
        
    }
};