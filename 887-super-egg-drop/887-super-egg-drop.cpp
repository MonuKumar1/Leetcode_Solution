class Solution
{
    public:
        int fun(int e, int f, vector<vector < int>> &dp)
        {

            if (f == 0 || f == 1) return f;

            if (e == 1) return f;
            if (dp[e][f] != -1) return dp[e][f];

            int mini = 1e9;
            int l = 1, h = f, temp = 0;
            while (l <= h)
            {
                int k = (l + h) / 2;
                int flag = 0;
                int low, high;
                if (dp[e - 1][k - 1] != -1)
                    low = dp[e - 1][k - 1];
                else
                {
                    dp[e - 1][k - 1] = fun(e - 1, k - 1, dp);
                    low = dp[e - 1][k - 1];
                }
                if (dp[e][f - k] != -1)
                    high = dp[e][f - k];
                else
                {
                    dp[e][f - k] = fun(e, f - k, dp);
                    high = dp[e][f - k];
                }

                temp = 1 + max(low, high);//worst case

                if (low < high) l = k + 1;

                else h = k - 1;

                mini = min(mini, temp);// worst case mai kitne minimum attempts lagenge
            }

            return dp[e][f] = mini;
        }

    int superEggDrop(int k, int n)
    {

        vector<vector < int>> dp(k + 1, vector<int> (n + 1, -1));
        return fun(k, n, dp);
    }
};