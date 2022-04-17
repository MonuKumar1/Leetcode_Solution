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
    TreeNode* increasingBST(TreeNode* root) {
        
       vector<int>nums;
       inorder(root,nums);
        // sort(nums.begin(),nums.end());
        return solve(nums,0,nums.size());
    }
    void inorder(TreeNode*r,vector<int>&nums)
    {
        if(r==NULL)return;
        inorder(r->left,nums);
        nums.push_back(r->val);
        inorder(r->right,nums);
    }
      TreeNode* solve(vector<int>&nums,int l,int h)
      {
        if(h<=l) return NULL;
          //\\//\\int m=(l+h)/2;
         
          TreeNode *n=new TreeNode(nums[l]);
          n->left=NULL;
           l++;
        n->right=solve(nums,l,h);
        return n;
      }
    
};