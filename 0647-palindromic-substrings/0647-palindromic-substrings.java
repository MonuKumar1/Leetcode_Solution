class Solution {
    public int countSubstrings(String s) {
        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            ans += isPal(s, i, i);
            ans += isPal(s, i, i + 1);

        }
        return ans;

    }

    int isPal(String s, int i, int j) {

        int count = 0;
        int n = s.length();

        while (i >= 0 && j < n) {
            if (s.charAt(i) == s.charAt(j)) {
                count++; i--;j++;
            } else
                break;
        }
        return count;
    }
}