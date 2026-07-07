class Solution {
     void solve(int n, int op, int cl, List<String>ans, StringBuilder str) {
        if (op == n && cl == n) {
            ans.add(str.toString());
            return;
        }

        if (op < n) {
            str.append("(");
            solve(n, op + 1, cl, ans, str);
            str.deleteCharAt(str.length() - 1);
        }

        if (cl < op) {
            str.append(")");
            solve(n, op, cl + 1, ans, str );
            str.deleteCharAt(str.length() - 1);
        }
    }
  
    public List<String> generateParenthesis(int n) {
         List<String> ans = new ArrayList<>();
        StringBuilder str = new StringBuilder();

        solve(n, 0, 0, ans, str);
        return ans;
    }
}