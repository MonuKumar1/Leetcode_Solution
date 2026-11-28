class Solution {

    List<List<Integer>> ans;

    void solve(int[] nums,int target,int ind,List<Integer>tmp){
        if(target==0){
            ans.add(new ArrayList<>(tmp));
            return;
        }
        if(ind>=nums.length || target<0)return;

        for(int i=ind;i<nums.length;i++){
            tmp.add(nums[i]);
            solve(nums,target-nums[i],i,tmp);
            tmp.remove(tmp.size()-1);

        }


    }
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<Integer>tmp= new ArrayList<>();
        ans = new ArrayList<>();
        solve(candidates,target,0,tmp);
        return ans;
    }
}