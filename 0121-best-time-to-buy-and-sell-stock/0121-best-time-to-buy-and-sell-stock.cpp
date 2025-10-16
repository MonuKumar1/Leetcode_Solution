class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini= INT_MAX;
        int ans=INT_MIN;
        for(auto x:prices){
            mini = min(x,mini);
            ans = max(x-mini,ans);
        }
        return ans;
    }
};