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
    TreeNode* dfs(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if(root==NULL || root==p || root==q)return root;
           TreeNode * parent1 = dfs(root->left, p, q);
           TreeNode * parent2 = dfs(root->right, p, q);
        if( parent1 && parent2)
            return root;
        else   
        {
            if(parent1)return parent1;
            else return parent2;
        }
        
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return dfs(root, p, q);
    }
};