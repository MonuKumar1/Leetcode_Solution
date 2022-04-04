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
    ListNode* swapNodes(ListNode* head, int k) {
        
        
//          ListNode *root=head;
        
//         int n=0;
//         while(root)
//         {
//             root=root->next;
//             n++;
//         }
        
        
//         int i=1;
//         int j=n-k;
        
//         while(i<k)
//         {
            
//         }
        ListNode *first;
        ListNode *p=head;
        
        while(--k) p=p->next;            
        
        first=p;
        ListNode *second=head;
        while(p->next)
        {
            p=p->next;
            second=second->next;
        }
        swap(first->val,second->val);
        return head;
        
        
        }
};