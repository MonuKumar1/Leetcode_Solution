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
 // static bool comp(int a,int b)
 //        return a>b;
class Solution {
public:
   
 void dfs (TreeNode* root,vector<int>&v)
 {
     if(root==NULL)return;
     dfs(root->left,v);
     v.push_back(root->val);
     dfs(root->right,v);
 }
    
    bool isValidBST(TreeNode* root) {
     // return bfs(root); 
        vector<int>v,v1;
        dfs(root,v1);
        v=v1;
        
        sort(v1.begin(),v1.end());
        for(int i=1;i<v1.size();i++)if(v1[i]==v1[i-1])return 0;
        return v1==v;
    }
    
};

//   bool  bfs(TreeNode* root)
//     {
//          if(root==NULL)return true;
//          if(root->left==NULL and root->right==NULL) return true;
        
//         queue<TreeNode*>q;
//         q.push(root); 
//         while(!q.empty()){
            
//             TreeNode* temp=q.front();
//             q.pop();
//             if(temp->left and temp->right){
//             q.push(temp->left);
//             q.push(temp->right);
//                 if(temp->val<=temp->left->val || temp->val>=temp->right->val )return                      false;}
//             if(temp->left==NULL and temp ->right!=NULL)return false;
//             if(temp->left!=NULL and temp ->right==NULL)return false;
                
            
//         }
//         return true;
        
//     }