class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
 
        
//         multimap<int,pair<int,int>>mp;
        
//         int n=costs.size();
        
//         for(int i=0;i<n;i++)
//         {
//             int t=abs(costs[i][0]-costs[i][1]);
            
//             mp.insert(t,make_pair(costs[i][0],costs[i][1]));
//         }
//         // cout<<mp[10].first<<endl;
//         // sort(mp.begin(),mp.end());
//         for(auto &x:mp)
//         {
//             cout<<x.first<<endl;
//         }
//         return 0;
        vector<int> refund;
        int N = costs.size()/2;
        int minCost = 0;
        for(vector<int> cost : costs){
            minCost += cost[0];
            refund.push_back(cost[1] - cost[0]); 
        }
        sort(refund.begin(), refund.end());
        for(int i = 0; i < N; i++){
            minCost += refund[i];
        }
        return minCost;
        
    }
};