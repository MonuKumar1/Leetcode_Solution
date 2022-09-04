class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {    
        
       long long ans=0;int n=nums.size();
        int cur=nums[n-1];
        for(int i=n-2;i>=0;i--){
            if(nums[i]%cur==0){
                ans+=((nums[i]/cur)-1);
            }
            else {
                ans+=((nums[i]/cur));
                int div=(nums[i]/cur)+1;
                cur=min(nums[i],nums[i]/div);
            }
        }
        return ans;
        
    }
};