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
    string ans="";
    void pre(TreeNode* node)
    {
        if(node==NULL){
            return;
        }
        ans+=to_string(node->val);

     if(node->left || node->right) {ans+='('; pre(node->left);ans+=')';}
     if(node->right)  {ans+='('; pre(node->right);ans+=')';}
        
    }
    string tree2str(TreeNode* root) {
        
        pre(root);
        return ans;
    }
};