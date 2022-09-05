/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root==NULL)return {};
        vector<vector<int>> ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
           
            
            vector<int>v;
            int l=q.size();
            while(l--)
            { Node* temp=q.front();
             q.pop();
             v.push_back(temp->val);
            for(auto it:temp->children)
         { q.push(it);
           // v.push_back(it->val);
         }
            } 
             ans.push_back(v);
            // if(temp->left!=NULL)q.push(temp->left);
            // if(temp->right!=NULL)q.push(temp->right);
        }
        return ans;
    }
};