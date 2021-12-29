/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
//     https://www.youtube.com/watch?v=yl-fdkyQD8A
    Node* connect(Node* root) {
        if(root==NULL)return root;
        Node* head=root;
        queue<Node*>q;
        q.push(head);
        while(!q.empty()){
            int n=q.size();
            Node* t=new Node(0);
            while(n--)
            {
             Node *temp=q.front(); q.pop();
                t->next=temp;
                t=t->next;
               
                
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);}
              
            }
           
                
        }
        return root;
    }
};