class Solution {
public:
    vector<int>dp;
    int solve(vector<vector<int>>& mat, int i,int j,int m,int n){
         if (j < 0 || j >= n) return 1e9;
        if (i == m - 1) return mat[i][j];
        if(dp[j]!=-1)return dp[j];
        int left = solve(mat,i+1,j,m,n);
        int right = solve(mat,i+1,j-1,m,n);
        int down = solve(mat,i+1,j+1,m,n);
        return  dp[j]=mat[i][j] +min({left,right,down});
    }

    int minFallingPathSum(vector<vector<int>>& mat) {
        // int m = mat.size(), n = mat[0].size();
        //      dp.resize(n,-1);

        //     int ans = INT_MAX;
        //     for(int k=0;k<mat[0].size();k++){
        //         ans = min(solve(mat,0,k,mat.size(),mat[0].size()),ans);

                
        //     }
        //     return ans;
         int m = mat.size(), n = mat[0].size();

        vector<int> prev = mat[m - 1];  

        for (int i = m - 2; i >= 0; i--) {
            vector<int> cur(n);

            for (int j = 0; j < n; j++) {
                int down = prev[j];
                int left = (j > 0) ? prev[j - 1] : 1e9;
                int right = (j < n - 1) ? prev[j + 1] : 1e9;

                cur[j] = mat[i][j] + min(down, min(left, right));
            }

            prev = cur;  
        }

        return *min_element(prev.begin(), prev.end());

    }
};