class Solution {
public:
    int fin_xor;
    void solve(vector<int>& nums,int ind,int cur){
        if(ind==nums.size()){
            fin_xor+=cur;
            return;
        }

        solve(nums,ind+1,cur);
        cur^=nums[ind];
        solve(nums,ind+1,cur);
    }
    int subsetXORSum(vector<int>& nums) {
        fin_xor=0;
        solve(nums,0,0);
        return fin_xor;


    }
};