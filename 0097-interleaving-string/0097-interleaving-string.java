class Solution {
        Boolean[][] memo;

    public boolean interLeave(String s, String t, String u, int n, int m, int o) {
        if (n == 0 && m == 0 && o == 0) {
            return true;
        }
        if (memo[n][m] != null) return memo[n][m];
        boolean flag1=false,flag2=false;
        if (n > 0 && o > 0 && s.charAt(n - 1) == u.charAt(o - 1)) {
            flag1= interLeave(s,t,u,n-1,m,o-1);
        }

        if (m > 0 && o > 0 && t.charAt(m - 1) == u.charAt(o - 1)) {
            flag2=interLeave(s,t,u,n,m-1,o-1);
        }
        memo[n][m]=flag1||flag2;
        return flag1||flag2;
    }

    public boolean isInterleave(String s1, String s2, String s3) {
        int n = s1.length();
        int m = s2.length();
        int o = s3.length();
        //   int n = s1.length(), m = s2.length();
        if (n + m != s3.length()) return false;
        memo = new Boolean[n + 1][m + 1];

        return interLeave(s1, s2, s3, n, m, o);
    }
}
