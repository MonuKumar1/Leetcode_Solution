/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* root=head;
        int n=0;
        if(head==NULL)return head;
        // while(root!=NULL)
        // {
        //     root=root-next;
        //     n++;
        // }
        root=head;
        helper(root);
        return head;
    }
    
    void helper(ListNode* node){
        
        if(node->next==NULL || node==NULL)return;
        if(node->next)
        {
            int x=node->val;
            node->val=node->next->val;
            node->next->val=x;
        }
        if(node->next->next)
        helper(node->next->next);
        else return;
        
    }
    
    
};