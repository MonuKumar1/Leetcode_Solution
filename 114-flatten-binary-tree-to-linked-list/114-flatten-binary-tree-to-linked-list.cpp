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
  void function(TreeNode* root)
    {
      if(root==NULL ||(root->left==NULL and root->right==NULL))return;
      if(root->left!=NULL){
          function(root->left);
      
      TreeNode *temp=root->right;
      root->right=root->left;
      root->left=NULL;
      
      TreeNode* t=root->right;
      while((t->right)!=NULL)
          t=t->right;
      
         t->right=temp;
     
      }
      function(root->right);
      
      
      
    }
    void flatten(TreeNode* root) {
    function(root);     
      
    }
};