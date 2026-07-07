class Solution {
    List<List<Integer>> ans;

    public void solve(int[] nums, int ind, List<Integer> cur) {
        ans.add(new ArrayList<>(cur));


        for (int i = ind; i < nums.length; i++) {
            if (i > ind && nums[i] == nums[i - 1]) continue;

            cur.add(nums[i]);      
            solve(nums, i + 1, cur); 
            cur.remove(cur.size() - 1);
        }
    }

    public List<List<Integer>> subsetsWithDup(int[] nums) {
        List<Integer> cur = new ArrayList<>();
        Arrays.sort(nums); 
        ans = new ArrayList<>();
        solve(nums, 0, cur);
        return ans;
    }
}