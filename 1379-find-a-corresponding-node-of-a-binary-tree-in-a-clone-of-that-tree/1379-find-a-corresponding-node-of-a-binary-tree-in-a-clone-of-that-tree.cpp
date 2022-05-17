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
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        int x=target->val;
        
        queue<TreeNode*>q;
        q.push(cloned);
        
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();
            if(temp->val==x)return temp;
            
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
        return cloned;
        
        
        
    }
};