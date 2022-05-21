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
    
    bool helper(TreeNode* root, int sum)
    {
         if(root->left==NULL and root->right==NULL ){
             
            if(sum-root->val==0)
                return true;
            else return false;
        }
        if(root->left and root->right==NULL)
        return helper(root->left,sum-root->val);
        
         if(root->left==NULL and root->right)
        return helper(root->right,sum-root->val);
        
        return helper(root->left,sum-root->val) or helper(root->right,sum-root->val); 
//          if(root==NULL and sum)return false;
        
//          if(root->left==NULL and root->left==NULL ){
//          if(sum-root->val==0)
//             return true;
//             else return false;}
        
//         return helper(root->left,sum-root->val) or helper(root->right,sum-root->val); 
        
        
    }
    bool hasPathSum(TreeNode* root, int sum) {
        
                if((root==NULL))return false;
        return helper(root,sum);
        
       
        
    }
};