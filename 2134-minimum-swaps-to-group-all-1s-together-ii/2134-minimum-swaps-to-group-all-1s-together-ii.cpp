class Solution {
public:
    int minSwaps(vector<int>& nums) {
        
        int n=nums.size();
        
        int t_one=count(nums.begin(),nums.end(),1);
        vector<int>v=nums;
        // nums.push_back(v);
        // v.push_back(nums);
         // nums.insert(nums.end(),v);
         // nums.insert(vec2.end, v.begin(), v.end());
        for(auto x:nums)
            v.push_back(x);
        
        int ans=0;
        for(int i=0;i<t_one;i++)
        {
            if(nums[i]==1)
                ans++;
        }
        

        int window_sum = ans;
        for (int i = t_one; i < v.size(); i++) {
            window_sum += v[i] - v[i - t_one];
            ans = max(ans, window_sum);
        }
        
        ans=t_one-ans;
        return ans;

        // int cs=0,ce=0,cb=0;
        // int i=0;
        // while(i<n and nums[i]!=1){
        //     cs++;i++;
        // }
        // i=n-1;
        // while(i>=0 and nums[i]!=1)
        // {
        //     i--;
        //     ce++;
        // }
        // int sum=0;
        // for(int x:nums)sum+=x;
        // cb=n-sum-cs-ce;
        
    }
};