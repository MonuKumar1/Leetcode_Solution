class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int x=0;
        for(int i=0;i<n;i++)
        {
            x=max(x,nums[i]);
            if(x==0 and i==n-1)return true;
            if(x==0 and i<n-1)return false;
            x--;
        }
        
       return true; 
        
      
    }
};