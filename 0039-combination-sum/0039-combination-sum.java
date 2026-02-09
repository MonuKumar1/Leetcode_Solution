class Solution {
    List<List<Integer>> ans;

    void solve(int[] c, int t, int n, List<Integer> v) {
        if (t == 0) {
            ans.add(new ArrayList<>(v));
            return;
        }
        if (n < 0 || t < 0) {
            return;
        }

        solve(c, t, n - 1, v);

        if (t >= c[n]) {
            v.add(c[n]);
            solve(c, t - c[n], n, v);
            v.remove(v.size()-1);
        }

    }

    public List<List<Integer>> combinationSum(int[] c, int t) {
        ans = new ArrayList<>();
        solve(c, t, c.length - 1, new ArrayList<>());
        return ans;
    }
}