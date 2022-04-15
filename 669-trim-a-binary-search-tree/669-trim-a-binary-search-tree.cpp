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
//     int low;
//     int high;
//     TreeNode* help(TreeNode* root)
//     {
// //         if((root->left==NULL or root->right==NULL) ){
            
// //             if (root->val >= low and root->val <= high)return root;
// //             return NULL;
// //         }
        
//         if ( root->val < low)
//             root = help(root->right);
//         else if (root->val > high)
//             root = help(root->left);
        
//         if(root->left->val < low)
//             root->left = help(root->left->right);
        
//         else if(root->left->val > high) 
//             root = help(root->left->left);
//         else {
            
//         }
        
//         if(root->right->val > high) 
//             root->right = help(root->right->left);
        
//         if(root->right->val < low)
//             root = help(root->right->right);
        
//         return root;
//     }
    
    
//     TreeNode* trimBST(TreeNode* root, int low, int high) {
        
//         this->low = low;
//         this->high = high;
            
//         return help(root);
        
          TreeNode* trimBST(TreeNode* root, int L, int R) {
        if (!root) return root;
        if (root->val >= L && root->val <= R) {
            root->left = trimBST(root->left, L, R);
            root->right = trimBST(root->right, L, R);
            return root;
        }
        if (root->val < L)
            return trimBST(root->right, L, R);
        return trimBST(root->left, L, R);
    }   
        
//         TreeNode* head=root;
        
//         queue<TreeNode*>q;
//         q.push(head);
        
//         while(!q.empty())
//         {
//             TreeNode* temp=q.front();
//              q.pop();
            
            
//             int x=temp->val;
            
//             if(temp->left==NULL and temp->right)
//             {
//                 if(temp->right->val< low || temp->right->val>high)
//                 {
//                     if(temp->right->right)temp->right=temp->right->right;
//                     else if(temp->right->left)temp->right=temp->right->left;
//                     else temp->right==NULL;
//                 }
//                 q.push(temp->right);
//             }
            
//            if(temp->left and temp->right==NULL)
//             {
//                 if(temp->left->val< low || temp->left->val>high)
//                 {
//                     if(temp->left->right)temp->left=temp->left->right;
//                     else if(temp->left->left)temp->left=temp->left->left;
//                     else temp->left==NULL;
//                 }
//                 q.push(temp->left);
//             }
             
                
//         }
//         return head;
        
        
    // }
};