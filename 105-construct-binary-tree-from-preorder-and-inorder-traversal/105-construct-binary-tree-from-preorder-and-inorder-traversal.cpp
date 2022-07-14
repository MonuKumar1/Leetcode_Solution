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
  //  cout<<k<<" "<<i<<" "<<j<<" "<<x<<" "<<y<<endl;       
    int l=x;
        //inorder
            for(;l<=y;l++){
                if(v2[l]==k)break;
            }
    
    int p=l-x;
        TreeNode* ans;
    return ans=new TreeNode(k,help(v1,v2,i+1,i+p,x,l-1),help(v1,v2,i+p+1,j,l+1,y));
    
    
    
    
    
//    // cout<<"value of l  "<<l<<" "<<k<<endl;
//     if(x==l && y==l)return ans=new TreeNode(k);
//     if(x==l)return ans=new TreeNode(k,NULL,help(v1,v2,i+1,j,l+1,y));
//     if(y==l)return ans=new TreeNode(k,help(v1,v2,i+1,j,x,l-1),NULL);
//     int p=i+1;
    
//     for(;p<=j;p++){
//         if(v1[p]==v2[l-1])break;
//     }
//     //cout<<"value of p  "<<p<<" "<<k<<endl;
                
                
//      return ans=new TreeNode(k,help(v1,v2,i+1,p,x,l-1),help(v1,v2,p+1,j,l+1,y));
//     return ans;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=inorder.size();
      return help(preorder,inorder,0,n-1,0,n-1);
    }
};