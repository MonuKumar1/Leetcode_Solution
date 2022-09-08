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
void inorder(TreeNode* root,vector<int>&b)
    {
        if(root==0)return;
        inorder(root->left,b);
        b.push_back(root->val);
        inorder(root->right,b);
    }
    vector<int> inorderTraversal(TreeNode* root) {
       vector<int>b;
        inorder(root,b);
       return b;
    }
};