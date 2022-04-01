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
    TreeNode* createBinaryTree(vector<vector<int>>& d) {
        
        unordered_map<int, TreeNode*>mp;
        unordered_map<int,bool>isChild;
        
        int n = d.size();
    
        for(int i=0;i<n;i++)
        {
            if(mp.find(d[i][0])==mp.end())
            {
                TreeNode* node= new TreeNode(d[i][0]);
                mp[d[i][0]]=node;
            }
            
            if(mp.find(d[i][1])==mp.end())
            {
                TreeNode* child= new TreeNode(d[i][1]);
                mp[d[i][1]]=child;
            }
            
            if(d[i][2]==1)
                mp[d[i][0]]->left=mp[d[i][1]];
            else
                 mp[d[i][0]]->right=mp[d[i][1]];
            
            isChild[d[i][1]]=true;
            
        }
         TreeNode* ans = NULL;
        for(auto &v: d){
            if(isChild[v[0]] != true){                  
                ans = mp[v[0]]; 
                break;
            }
        }
        return ans;
        
        
        
        
    }
};