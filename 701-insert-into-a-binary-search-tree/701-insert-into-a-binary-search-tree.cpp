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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
         if(root==NULL){
             TreeNode* head=new TreeNode(val);
             head->left=NULL;
             head->right=NULL;
             return head;
         }
        if(val<root->val)
        {
            root->left=insertIntoBST(root->left,val);
        }
        if(val>root->val)
        {
            root->right=insertIntoBST(root->right,val);
        }
        return root;
            
        
        
        
//          if(root==NULL){
//              TreeNode* head=new TreeNode(val);
//              head->left=NULL;
//              head->right=NULL;
//              return head;
//          }
//         queue<TreeNode*>q;
//        q.push(root);
//         while(!q.empty())
//         {
//             TreeNode* temp=q.front();
//             q.pop();
//             if(temp->val==val)return temp;
//             if(temp->left)q.push(temp->left);
//             else
//             {
//                 TreeNode * ins=new TreeNode(val);
//                 ins->left=NULL;
//                 ins->right=NULL;
                                
                
//             }
//             if(temp->right)q.push(temp->right);
//         }
    }
};