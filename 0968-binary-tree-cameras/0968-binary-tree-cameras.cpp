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
    #define Has_C =1;
    #define Need_C=2;
    #define Not_Need=0;
    int ans;
    int dfs(TreeNode* root){
        if(!root)return 0;
        
        int l=dfs(root->left);
        int r=dfs(root->right);
        
        if(l==2 || r==2){
            ans++;
            return 1;
        }
        
       else if(l==1 || r==1){
           
            return 0;
        }
        
       else{
           return 2;
       }
        
    }
    
    int minCameraCover(TreeNode* root) {
        ans=0;
        if(dfs(root)==2)ans++;
        
        return ans;
    }
};