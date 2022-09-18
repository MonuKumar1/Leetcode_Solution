class Solution {
public:
    
    int helper(int m,vector<int> v)
    {   int cur=0;
        for(auto x:v){
           {
            int p=x/m;
            if(p*m==x)cur+=(p-1);
                else cur+=(p);
            }
        }
     return cur;
        
    }
    
    
    int minimumSize(vector<int>& nums, int k) {
        
        int l=1,h=*max_element(nums.begin(),nums.end());
        int ans=h;
        while(l<=h)
        {
            int m=l+(h-l)/2;
            
            int n=helper(m,nums);
            
            if(n>k)
            {
                l=m+1;
            }
            if(n<=k){
            ans=m;
                h=m-1;
            }
        }
        return ans;
      
    }
};