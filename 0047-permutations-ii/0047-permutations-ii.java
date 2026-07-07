
class Solution {
    List<List<Integer>> ans;

    public void solve(int[] nums, List<Integer> cur, boolean[] vis) {
        
        if (cur.size() == nums.length) {
            ans.add(new ArrayList<>(cur));
            return;
        }

        for (int i = 0; i < nums.length; i++) {
            if (vis[i]) continue;
                
            if (i > 0 && nums[i] == nums[i - 1] && !vis[i - 1]) continue;

            vis[i] = true;
            cur.add(nums[i]);      
            
            solve(nums, cur, vis); 
            
            cur.remove(cur.size() - 1);
            vis[i] = false; 
        }
    }
    
    public List<List<Integer>> permuteUnique(int[] nums) {
        List<Integer> cur = new ArrayList<>();
        Arrays.sort(nums); 
        ans = new ArrayList<>();
        boolean[] vis = new boolean[nums.length];
        solve(nums, cur, vis);
        
        return ans;
    }
}