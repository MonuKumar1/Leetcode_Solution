class Solution {
public:
    int solve(int ind, vector<vector<int>>& zeros, vector<vector<int>>& extras,
              vector<bool>&used) {
        if (ind == extras.size())
            return 0;

        int ans = INT_MAX;

        for (int i = 0; i < zeros.size(); i++) {
            if (!used[i]) {
                used[i] = true;

                int cost = abs(extras[ind][0] - zeros[i][0]) +
                           abs(extras[ind][1] - zeros[i][1]);

                ans = min(ans, cost + solve(ind + 1, zeros, extras, used));

                used[i] = false;
            }
        }

        return ans;
    }

    int minimumMoves(vector<vector<int>>& grid) {

        vector<vector<int>> zeros, extras;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {

                if (grid[i][j] == 0)
                    zeros.push_back({i, j});

                if (grid[i][j] > 1) {
                    int extra = grid[i][j] - 1;

                    while (extra--)
                        extras.push_back({i, j});
                }
            }
        }

        vector<bool> used(zeros.size(), false);

        return solve(0, zeros, extras, used);
    }
};