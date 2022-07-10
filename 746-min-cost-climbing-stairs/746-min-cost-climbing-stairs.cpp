class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
     
        int n=cost.size();
        int dp[n];
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<n;i++){
            dp[i]=min(dp[i-1],dp[i-2])+cost[i];
        }
        return min(dp[n-1],dp[n-2]);
        
    }
};
// class Solution {
// public:
//     unordered_map<int, int> map;
//     vector<int>cost;
//     int dp(int i) {
//         if (i == 0)return cost[0];
//         if (i == 1)return min(cost[0], cost[1]);
        
//         if (map.find(i) == map.end()) {
//             map[i] =  cost[i] + min(dp(i-2), dp(i-1));
//         }
//         return map[i];
//     }
//     int minCostClimbingStairs(vector<int>& cost) {
//         this->cost = cost;
//         int n=cost.size();
//         if(cost[n-1]>cost[n-2] and n<=2)
//         return dp(n-2);
//         return dp(n-1);
//     }
// };