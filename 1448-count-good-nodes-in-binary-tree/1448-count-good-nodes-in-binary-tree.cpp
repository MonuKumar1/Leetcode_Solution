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
    int count;
    int goodNodes(TreeNode* root) {
        count=0;
        int maxi=root->val;
        pre(root,maxi);
        return count;
        
    }
    void pre(TreeNode* r,int maxi)
    {
        if(r==NULL)
            return;
        if(r->val>=maxi)
        {
            count++;
            maxi=r->val;
        }
        
        pre(r->left,maxi);
        // maxi=r->val;
        pre(r->right,maxi);
        // maxi=r->val;
    }
};