class Solution {
public:
    int dp[2001];
    bool isPalindrome(string& s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }

    int solve(string& s, int i) {
        int n = s.size();
        if (i == n)
            return -1;
        if (dp[i] != -1)
            return dp[i];

        int ans = INT_MAX;

        for (int k = i; k < n; k++) {
            if (isPalindrome(s, i, k)) {
                ans = min(ans, 1 + solve(s, k + 1));
            }
        }

        return dp[i] = ans;
    }

    int minCut(string s) {
        memset(dp, -1, sizeof(dp));

        return solve(s, 0);
    }
};
