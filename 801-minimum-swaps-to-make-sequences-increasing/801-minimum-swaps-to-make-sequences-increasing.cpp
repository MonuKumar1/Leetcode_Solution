class Solution {
public:
    int solve(vector<int>& nums1, vector<int>& nums2,int ind,int swapped, vector<vector<int>>&dp){
        
        if(ind==nums1.size())return 0;
        if(dp[ind][swapped]!=-1)return dp[ind][swapped];
        int prev1=nums1[ind-1];
        int prev2=nums2[ind-1];
        int ans=1e9;
        if(swapped)
            swap(prev1,prev2);
        //no swap
        if(nums1[ind]>prev1 and nums2[ind]>prev2)
           ans = solve(nums1,nums2,ind+1,0,dp);
        
        if(nums1[ind]>prev2 and nums2[ind]>prev1)
            ans=min(ans,1+solve(nums1,nums2,ind+1,1,dp));
        return dp[ind][swapped]=ans;
        
        
    }
    int solveTab(vector<int>& nums1, vector<int>& nums2){
        
        int n=nums1.size();
        vector<vector<int>>dp(nums1.size()+1,vector<int>(2,0));
        
        for(int ind=n-1;ind>=1;ind--)
        {
            for(int swapped=1;swapped>=0;swapped--)
            {
                int prev1=nums1[ind-1];
                int prev2=nums2[ind-1];
                int ans=1e9;
                if(swapped)
                    swap(prev1,prev2);
                if(nums1[ind]>prev1 and nums2[ind]>prev2)
                   ans = dp[ind+1][0];

                if(nums1[ind]>prev2 and nums2[ind]>prev1)
                    ans=min(ans,1+dp[ind+1][1]);
                
                dp[ind][swapped]=ans;

                
            
          }
        
     }
                            
    return dp[1][0];
}
                            
    
    int minSwap(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.begin(),-1);
        nums2.insert(nums2.begin(),-1);
        int swapped=0;
        
        vector<vector<int>>dp(nums1.size()+1,vector<int>(2,-1));
        
        return solveTab(nums1,nums2);
        // return ans;
    }
};