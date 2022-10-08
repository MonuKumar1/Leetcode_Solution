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
    vector<int>v;
    
 int solve(TreeNode* root,int x)
    {
      if(!root)return 0;
      
      int a=solve(root->right,x);
      int b=solve(root->left,x);
      if(root->val==x)
      {
           v={a,b};
          
      }
       return a+b+1;
        
    }
    
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        
       int v2=solve(root,x);
        int a= v[0];
        int b=v[1];
        
        
        int c=n-a-b-1;
        
        if(a>=b+c+1 || b>=a+c+1 || c>=a+b+1){return true;}
        return false;
    }
};