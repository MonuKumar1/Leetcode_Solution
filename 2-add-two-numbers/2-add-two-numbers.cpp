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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *A=new ListNode(-1);
        
        ListNode *temp=A;
        int carry=0;
        int sum=0;
        
        while(l1!=NULL || l2!=NULL || carry!=NULL)
        {
            int x=0,y=0;
            if(l1!=NULL)
            {
                x=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                y=l2->val;
                l2=l2->next;
            }
             sum=x+y+carry;
            carry=sum/10;
            ListNode *t=new ListNode(sum%10);
            // t->next=NULL;
            temp->next=t;
            temp=temp->next;
            
        }
        temp->next=NULL;
        return A->next;
    }
};