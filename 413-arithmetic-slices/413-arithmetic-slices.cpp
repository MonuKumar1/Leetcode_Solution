class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
           int n = A.size();
        if (n < 3) return 0;
        vector<int> dp(n, 0);
        if (A[2]-A[1] == A[1]-A[0]) dp[2] = 1; 
        int result = dp[2];
        for (int i = 3; i < n; ++i) {
            if (A[i]-A[i-1] == A[i-1]-A[i-2]) 
                dp[i] = dp[i-1] + 1;
            result += dp[i];
        }
        return result;
      
//         // sort(nums.begin(),nums.end());
//         int n=nums.size();
//         int count=0;
//         // unordered_map<int,int>mp;
//         vector<int>v;
//         for(int i=1;i<n;i++)
//         {
//             int a=nums[i]-nums[i-1];
//             int c=0;
//             while(i<n and nums[i]-nums[i-1]==a)
//             { 
//                 // mp[nums[i]-nums[i-1]]++;
//                 c++;i++;
//             }
//             v.push_back(c);
//         }
//         for(int i=0;i<v.size();i++)
//         {
//             int x=v[i];
//             if(x>1)
//             count=count+(x*(x-1))/2;
//         }
        
//          return count;
        
    }
};