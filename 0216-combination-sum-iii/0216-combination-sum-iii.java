class Solution {

    List<List<Integer>> ans;
    int k;

    void solve(int target, List<Integer> tmp,int ind) {
        if (target == 0 && tmp.size() == k) {
            ans.add(new ArrayList<>(tmp));
            return;
        }
        if (target < 0 || tmp.size() > k)
            return;

        for (int i = ind; i <= 9; i++) {
            if (!tmp.contains(i)) {
                tmp.add(i);
                solve(target - i, tmp,i);
                tmp.remove(tmp.size() - 1);
            }

        }

    }

    public List<List<Integer>> combinationSum3(int k, int n) {
        this.k = k;
        List<Integer> tmp = new ArrayList<>();
        ans = new ArrayList<>();
        solve(n, tmp,1);
        return ans;
    }
}