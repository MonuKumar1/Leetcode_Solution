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
     // unordered_map<TreeNode*,int>mp;
     //  int max_height(TreeNode* root)
     //  {
     //      if(root==NULL)return 0;
     //      return 1+max(max_height(root->left),max_height(root->right));
     //  }
    
    int deepestLeavesSum(TreeNode* root) {
        
        // vector<vector<int>>v;
        int sum=0;
        if(root==NULL)return 0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            // vector<int>v1;
            sum=0;
            int n=q.size();
            while(n--)
            {
                TreeNode*t=q.front();
                q.pop();
               // v1.push_back(t->val);
                sum+=t->val;
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
            }
            // v.push_back(v1);
        }
        // reverse(v.begin(),v.end());
        return sum;
        
    }
};