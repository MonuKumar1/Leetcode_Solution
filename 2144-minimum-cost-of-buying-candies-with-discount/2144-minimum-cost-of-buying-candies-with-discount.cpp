class Solution {
public:
    int minimumCost(vector<int>& cost) {
        
        int n=cost.size();
        sort(cost.begin(),cost.end());
        if(n==1)return cost[0];
        int ans=0;
        int count=0;
        for(int i=n-1;i>=0;i--)
        {
            if(count<2)
            {ans+=cost[i];
             count++;
            }
            else count=0;
        }
        return ans;
    }
};