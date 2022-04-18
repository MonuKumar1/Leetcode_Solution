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
   int cnt;
void inorder(TreeNode* A, int& ans) {
    if (A == NULL) return;

    inorder(A->left, ans);
    cnt--;
    if(cnt == 0){ ans = A->val; return;} 
inorder(A->right, ans);
}
    int kthSmallest(TreeNode* root, int k) {
        int ans=-1; cnt=k;
        inorder(root,ans);
        return ans;
        
        
    }
};