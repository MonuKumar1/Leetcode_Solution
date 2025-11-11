class Solution {
    public String longestPalindrome(String s) {
        int n = s.length();
        String ans = "";
        
        for (int i = 0; i < n; i++) {
            String odd = expandAroundCenter(s, i, i);
            String even = expandAroundCenter(s, i, i + 1);

            if (ans.length() < odd.length()) {
                ans = odd;
            }
            if (ans.length() < even.length()) {
                ans = even;
            }
        }
        return ans;
    }

    public String expandAroundCenter(String s, int l, int r) {
        while (l >= 0 && r < s.length() && s.charAt(l) == s.charAt(r)) {
            l--;
            r++;
        }
        return s.substring(l + 1, r);
    }
}
