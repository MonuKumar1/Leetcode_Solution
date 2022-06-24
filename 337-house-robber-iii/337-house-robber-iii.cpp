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
   // int ans2;
    void dfs(TreeNode* root)
    {
        
        if(!root)return ;
        dfs(root->left);
        dfs(root->right);
        // val+=root->val;
        int val=0,aisha=0;
        
        if(root->left)
        {  aisha+=root->left->val;
            if(root->left->left)
            val+=root->left->left->val;
         if(root->left->right)
             val+=root->left->right->val;
        }
        if(root->right)
        {
            aisha+=root->right->val;
             if(root->right->left)
            val+=root->right->left->val;
             if(root->right->right)
                 val+=root->right->right->val;
        }
      root->val=max(root->val+val,aisha);
          return ;
        
    }
    
    int rob(TreeNode* root) {
        
        // int val=0;
        if(root==NULL)return 0;
        
        dfs(root);
        return root->val;
        
        
        
        
    }
};