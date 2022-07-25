class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
     
        
        int l=0, h=nums.size()-1;
        int mini,maxi;
        
        while(l<=h)
        {
            int m=l+(h-l)/2;
            
            if(nums[m]>t)
            {
                h=m-1;
            }
            if(nums[m]<t)
                l=m+1;
            
            if(nums[m]==t)
            {
                int x=m;
                while(x>=0 and nums[x]==t)
                    x--;
                while(m<=h and nums[m]==t)m++;
                return {x+1,m-1};
            }
        }
        
        return {-1,-1};
        
        
    }
};