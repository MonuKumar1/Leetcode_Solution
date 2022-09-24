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
    vector<vector<int>>ans;
    
    void dfs(TreeNode* r,int sum,vector<int>&path)
    {
        if(r==NULL) return ;
        path.push_back(r->val);
        sum-=r->val;
        if(r->left==NULL and r->right==NULL)
        {
            if(sum==0)ans.push_back(path);
        }
        else{
            dfs(r->left,sum,path);
            dfs(r->right,sum,path);
            
        }
        
        path.pop_back();
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<int> path;
        dfs(root,targetSum,path);
        return ans;
    }
};