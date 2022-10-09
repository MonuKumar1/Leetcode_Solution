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
    void help(TreeNode* h)
    {
       if(h==NULL)return;
        help(h->left);v.push_back(h->val);
        help(h->right);
    }
    
    bool findTarget(TreeNode* root, int k) {
        
           help(root);
           int n=v.size();
           int i=0,j=n-1;
        // sort(v.begin(),v.end());
        if(n==1)return false;
        set<int>st(v.begin(),v.end());
        
        for(auto it=st.begin();it!=st.end();it++)
        {
            int val=k-*it;
            if(st.find(val)!=st.end()  and *it!=val)return true;
        }
        return false;
            
      
        
    }
};