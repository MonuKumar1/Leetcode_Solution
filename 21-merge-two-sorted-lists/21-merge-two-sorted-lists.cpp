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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
       //      ListNode* sorted = NULL ;
       // sorted = new ListNode ();
     
        
         ListNode* sorted= new ListNode();
           ListNode *head =new ListNode();
      head=sorted;
        while(l1!=NULL and l2!=NULL)
        {
            if(l1->val >l2->val)
            {
                sorted->next=l2;
                l2=l2->next;
                sorted=sorted->next;
            }
            else
            {
             sorted->next=l1;
             l1=l1->next;
             sorted=sorted->next;
            }
            
        }
        
        if(l1!=NULL)
            sorted->next=l1;
        if(l2!=NULL)
            sorted->next=l2;
        return head->next;
    }
};