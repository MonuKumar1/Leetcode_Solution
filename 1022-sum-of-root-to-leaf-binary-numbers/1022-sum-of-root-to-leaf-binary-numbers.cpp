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
    int ans=0;
    void pre(TreeNode* head,vector<int>&v)
    {   
        if(head==NULL)return;
        v.push_back(head->val);
        if(head->left==NULL and head->right==NULL)
        {
            
          int len=v.size();
            int i=0;
            for(int j=len-1;j>=0;j--)
            {ans+=v[j]*pow(2,i);i++;}
        }
        else{
        pre(head->left,v);
        pre(head->right,v);}
        
        v.pop_back();
    }
    int sumRootToLeaf(TreeNode* root) {
        
        if(root==NULL)return 0;
        vector<int>v;
        pre(root,v);
        return ans;
    }
};