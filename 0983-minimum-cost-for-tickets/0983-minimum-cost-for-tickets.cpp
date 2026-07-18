class Solution {
public:
    vector<int> memo;

    int solve(const vector<int>& days, const vector<int>& costs, int i) {
        if (i >= days.size()) {
            return 0;
        }
        if (memo[i] != -1) {
            return memo[i];
        }
        int cost1 = costs[0] + solve(days, costs, i + 1);

        int nextIndex7 = i;
        while (nextIndex7 < days.size() && days[nextIndex7] < days[i] + 7) {
            nextIndex7++;
        }
        int cost7 = costs[1] + solve(days, costs, nextIndex7);

        int nextIndex30 = i;
        while (nextIndex30 < days.size() && days[nextIndex30] < days[i] + 30) {
            nextIndex30++;
        }
        int cost30 = costs[2] + solve(days, costs, nextIndex30);

        return memo[i] = min({cost1, cost7, cost30});
    }

public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        memo.assign(days.size(), -1);
        return solve(days, costs, 0);
    }
};