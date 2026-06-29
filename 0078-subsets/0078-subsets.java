class Solution {
     List<List<Integer>> ans;
    public  void solve(int[] nums,int ind,List<Integer>cur){
        if(ind==nums.length){
            ans.add(new ArrayList<>(cur));
            return;
        }
        solve(nums,ind+1,cur);
        cur.add(nums[ind]);
        solve(nums,ind+1,cur);
        cur.remove(cur.size() - 1);  

    }
    public List<List<Integer>> subsets(int[] nums) {
        List<Integer> cur = new ArrayList<>();
        ans = new ArrayList<>();
        solve(nums,0,cur);
        return ans;
    }
}