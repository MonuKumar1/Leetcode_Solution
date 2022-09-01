
class Solution {
    
public:

    vector<vector<int>> fourSum(vector<int>& nums, int sum2) {
        
        int n=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
       for(int p=0;p<n;p++)
       {
            long long target=sum2-nums[p];
           if (p > 0 && nums[p - 1] == nums[p]) continue;
            for (int i = p+1; i < n ; i++)
            {
                if (i > p+1 && nums[i- 1] == nums[i])continue;

                int j = i + 1;
                int k = n - 1;
                while (j < k)
                {
                     
                   long long sum = 1ll*nums[i] + 1ll*nums[j] + 1ll*nums[k];
                    if (sum ==target ){
                        
                        v.push_back({nums[p],nums[i],nums[j],nums[k] });

                        while (j < k && nums[j] == nums[j + 1]){j++;}
                        while (j < k && nums[k] == nums[k - 1]){k--;}

                        j++;
                        k--;
                    }
                    
                    else if (sum < target)
                        j++;
                    else 
                        k--;
                    
                }
            }
       }
        return v;
    }
};