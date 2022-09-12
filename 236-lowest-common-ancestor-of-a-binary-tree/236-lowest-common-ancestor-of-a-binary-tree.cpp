/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* solve(TreeNode* root, TreeNode* p, TreeNode* q){
        
        if(root==NULL || root==p || root==q)return root;
        
        TreeNode* p1=solve(root->left,p,q);
        TreeNode* p2=solve(root->right,p,q);
        
        if(p1 and p2)return root;
        else{
            if(p1)return p1;
            else return p2;
        }
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
       return solve(root,p,q);
    }
};