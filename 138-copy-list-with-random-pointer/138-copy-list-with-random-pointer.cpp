/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
       map<Node*,Node*>mp;
        
        Node* root = head;
        while(root)
        {
            mp[root]=new Node(root->val);
            root=root->next;
        }
        
        root=head;
        while(root)
        {
            mp[root]->next=mp[root->next];
            mp[root]->random=mp[root->random];
            root=root->next;
        }
        
        return mp[head];
        
        
        
    }
};