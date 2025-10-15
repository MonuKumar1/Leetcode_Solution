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
    bool solve(TreeNode* root, int t){
        if(!root)return false;
        if(root->left==NULL and root->right==NULL ){
             
            if(t-root->val==0)
                return true;
            else return false;
        }
        return solve(root->left,t-root->val)||solve(root->right,t-root->val);
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
          if((root==NULL))return false;
       return solve(root,targetSum);
    }
};