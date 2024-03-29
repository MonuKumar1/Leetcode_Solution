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
    int ans=INT_MIN;
    int solve(TreeNode* root)
    {
        if(!root)return 0;
        
        int lsum=max(solve(root->left),0);
        int rsum=max(solve(root->right),0);
        
        ans= max(ans,lsum+rsum+root->val);
        
        return max(lsum,rsum)+root->val;
    
        
        
    }
    
    int maxPathSum(TreeNode* root) {
        
        
        int c=solve(root);
        
        return ans;
    }
};