class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int maxm = nums[0],minim=nums[0];
        int ans=maxm;
        for(int i=1;i<nums.size();i++){
           int tmaxm = max({nums[i],maxm*nums[i],minim*nums[i]});
            minim = min({nums[i],maxm*nums[i],minim*nums[i]});
            cout<<minim<<" "<<maxm<<endl;
            maxm = tmaxm;
            ans = max(ans,maxm);
        }
        return ans;
    }
};