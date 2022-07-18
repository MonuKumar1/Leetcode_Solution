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
    TreeNode* help(vector<int>& v1, vector<int>& v2, int i,int j,int x,int y) {
      if(x>y)return NULL;
      int k=v1[j];
    
      int l=x;
   
    for(;l<=y;l++){
        if(v2[l]==k)break;
    }
    
    
    int p=l-x;
    
    TreeNode* ans;
    
    return ans=new TreeNode(k,help(v1,v2,i,i+p-1,x,l-1),help(v1,v2,i+p,j-1,l+1,y));

    
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        int n=inorder.size();
        
      return help(postorder,inorder,0,n-1,0,n-1);
        
    }
};