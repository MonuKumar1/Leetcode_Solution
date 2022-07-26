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
    int maxLevelSum(TreeNode* root) {
        if(root==NULL)return 0;
        map<int,int> m;
        queue<pair<TreeNode*,int>> q;
        q.push({root,1});
        while(!q.empty()){
            TreeNode* cur=q.front().first;
            int curr=q.front().second;
            q.pop();
            m[curr]+=cur->val;
             if(cur->left)q.push({cur->left,curr+1});
            if(cur->right)q.push({cur->right,curr+1});
            
        }
        int sum=INT_MIN;
        int ans=-1;
        for(auto i:m){
            if(i.second>sum)ans=i.first;
            sum=max(sum,i.second);
        }
        return ans;
    }
};