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
class BSTIterator {
public:
    // TreeNode* head;
    // int cur=0;

    vector<int>v;
    int v_size = 0;
    int curr_index = 0; 
        
    BSTIterator(TreeNode* root) {
        // head=root;
        v.push_back(-1);
        store(root);
        sort(v.begin(),v.end());
        v_size = v.size();
        
    }
    
    void store(TreeNode* root) {
        if (root==NULL)return;
        v.push_back(root->val);
        store(root->left);
        store(root->right);
    }
    
    int next() {
        
        return v[++curr_index];
      
//         vector<int>v;
//         if(head==NULL)return 0;
        
//         queue<int>q;
        
//         q.push(head->val);
        
//         while(!q.empty())
//         {
//             int temp=q.front()->val;
//             v.push_back(temp);
//             if(head->left)q.push(head->left);
//             if(head->right)q.push(head->right);
//         }
//         sort(v.begin(),v.end());
//         int n=v.size();
//         cur++;
        
//       return v[cur];
        
        
    }
    
    bool hasNext() {
        if(curr_index < v_size-1)
            return true;
        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */