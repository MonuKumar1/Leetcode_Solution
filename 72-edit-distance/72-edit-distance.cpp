class Solution {
public:
   int edit(int i, int j, string &A, string &B, vector<vector<int>> &dp){
    if(i==-1)return j+1;
    else if(j==-1)return i+1;
    
    if(dp[i][j] != -1)return dp[i][j];
    
    if(A[i] == B[j]) return dp[i][j] = edit(i-1, j-1, A, B, dp);
    
    return dp[i][j] = 1 + min({edit(i-1, j, A, B, dp), edit(i, j-1, A, B, dp), edit(i-1, j-1, A, B, dp)});
}

int minDistance(string A, string B) {
    int n = A.size(), m = B.size();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    
    return edit(A.size()-1, B.size()-1, A, B, dp);
}
};