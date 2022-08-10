/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // TreeNode* solve(vector<int>& nums, int start, int end){
    //     if(end <= start) return NULL;
    //     int mid = (start+end)/2;
    //     TreeNode* root = new TreeNode(nums[mid]);
    //     root->left = solve(nums, start, mid);
    //     root->right = solve(nums, mid+1, end);
    //     return root;    
    // }
    // TreeNode* sortedArrayToBST(vector<int>& nums) {
    //     return solve(nums, 0, nums.size());
    // }
    TreeNode* solve(vector<int>&nums,int l,int h)
      {
        if(h<=l) return NULL;
          int m=(l+h)/2;
          TreeNode *n=new TreeNode(nums[m]);
          n->left=solve(nums,l,m);
        n->right=solve(nums,m+1,h);
        return n;
      }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
     // TreeNode* ans= solve(nums,0,nums.size());
        return solve(nums,0,nums.size());
    }
};