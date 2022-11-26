class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
    map<int, int> times;
    unordered_map<int, vector<pair<int, int>>> jobs;
    for (auto i = 0; i < startTime.size(); ++i) {
        times[startTime[i]] = 0;
        jobs[startTime[i]].push_back({ endTime[i], profit[i] });
    }    
    int max_profit = 0;
    for (auto it = rbegin(times); it != rend(times); ++it) {
        for (auto job : jobs[it->first]) {
            auto it = times.lower_bound(job.first);
            max_profit = max(max_profit, (it == end(times) ? 0 : it->second) + job.second);
        }
        it->second = max_profit;
    }
    return max_profit;
}
//     int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
       
//          int n = startTime.size();
//         vector<vector<int>>v(n,vector<int>(3));
//         for(int i=0;i<n;i++)
//             v[i] = {endTime[i],startTime[i],profit[i]};
//         sort(v.begin(),v.end());
//         vector<int>dp(n,0);
//         for(int i=0;i<n;i++)
//         {
//             dp[i] = v[i][2];
//             for(int j=0;j<i;j++)
//             {
//                 if(v[i][1]<v[j][0])
//                     break;
//                 else
//                     dp[i]  = max(dp[i],v[i][2]+dp[j]);
//             }
//         }
//         return *max_element(dp.begin(),dp.end());
        
//     }
};