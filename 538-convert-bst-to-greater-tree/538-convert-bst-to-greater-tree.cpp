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
    
TreeNode* cloneBinaryTree(TreeNode* root)
{
    if (root == nullptr) {
        return nullptr;
    }
 
    TreeNode* root_copy = new TreeNode(root->val);
 
    root_copy->left = cloneBinaryTree(root->left);
    root_copy->right = cloneBinaryTree(root->right);
 
    return root_copy;
}
    
    
    void dfs(TreeNode*head, int &sum,int t)
    {
        if(head==NULL)return;
        
        if(head->val>t)sum+=head->val;
        
        dfs(head->right,sum,t);
        dfs(head->left,sum,t);
    }
    
    
    
    TreeNode* convertBST(TreeNode* root) {
   
        TreeNode* head = cloneBinaryTree(root);
        TreeNode* start=head;
        
      if(root==NULL)return NULL;
       queue<TreeNode*>q;
        
            q.push(root);
        
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();
            int x=temp->val;
            
            int sum=x;
            
            dfs(start,sum,x);
            temp->val=sum;            
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
            
            
        }
        return root;
        
        
    }
};