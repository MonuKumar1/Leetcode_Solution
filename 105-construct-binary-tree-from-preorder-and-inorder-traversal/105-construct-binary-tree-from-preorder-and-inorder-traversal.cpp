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
      int k=v1[i];
    
      int l=x;
    //inorder mai traverse kr rhe v2
    //x and y v2 ke lie
    for(;l<=y;l++){
        if(v2[l]==k)break;
    }
    
    int p=l-x;
    
    TreeNode* ans;
    
    return ans=new TreeNode(k,help(v1,v2,i+1,i+p,x,l-1),help(v1,v2,i+p+1,j,l+1,y));

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int n=inorder.size();
      return help(preorder,inorder,0,n-1,0,n-1);
    }
};
// [3,2,1,4]
// [1,2,3,4]

// [3,2,4,1]--->expected;