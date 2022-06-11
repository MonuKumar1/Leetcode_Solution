class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        
//         int n=nums.size();
        
//         int i=0,j=n-1;
//         int sum=0;
//         for(auto x:nums)sum+=x;
        
//         int tar = sum-x;
        
//         int maxi=0;
//          int sum2=0;
//         int i=0;
//         while(sum2<=tar)
//         {
//             sum2+=nums[i];i++;
//         }
        
//         int j=i;
        
//         while(j<n)
//         {
            
            
//             if(sum2>targ)
//             {
//                 sum2-=nums[i];
//                 i++;
//             }
            
            
            
            
//         }
        int n = nums.size();
        int s = 0, ans = 1000000;
        
        for(int i = 0; i < n ; i++) s += nums[i];
        
        if(s < x) return -1;
        
        int st = 0, end = 0, windowSum = 0;
        
        while(end < n){
            
            windowSum += nums[end];
            
            while(windowSum > (s - x)){
                windowSum -= nums[st];
                st++;
            }
            
            if(windowSum == s - x){
                ans = min(ans, n - (end - st + 1));
            }
            
            end++;
           }
        
        return (ans == 1000000 ? -1 : ans);
        
        
    }
};