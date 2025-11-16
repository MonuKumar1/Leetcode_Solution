class Solution {
public:
    vector<vector<int>> dp;

    int solve(int e, int f) {
        if (f == 0 || f == 1) return f;
        if (e == 1) return f;

        if (dp[e][f] != -1) return dp[e][f];

        int mini = INT_MAX;
        // for (int k = 1; k <= f; k++) {
        //     int temp = 1 + max(solve(e - 1, k - 1), solve(e, f - k));
        //     mini = min(mini, temp);
        // }
        int l=1,h= f;
        while(l<=h){
            int mid = l + (h-l)/2;

            int broken = solve(e-1,mid-1);
            int notBroken = solve(e,f-mid);
            int temp = 1 + max(broken,notBroken);
            if(broken<notBroken){
                l = mid+1;
            }
            else{
                h = mid-1;
            }
            mini = min(mini,temp);
        }

        return dp[e][f] = mini;
    }

    int superEggDrop(int k, int n) {
        dp.resize(k + 1, vector<int>(n + 1, -1));
        return solve(k, n);
    }
};
