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
    ListNode* reverseList(ListNode* head) {
        
        ListNode *cur=head;
        ListNode *pre=NULL;
        ListNode   *nex;
        
        while(cur!=NULL){
        ListNode* temp=cur->next;
            cur->next=pre;
            pre=cur;
            cur=temp;
        
        }
        
        return pre;;
        
     // ListNode *temp=new ListNode;
     //    ListNode *temp1=new ListNode;
     //        temp1=head;
     //    temp=head;
     //    while(head){
     //        head=head->next;
     //        head->next=temp;
     //        temp=temp->next;
     //    }
     // return head;
    
    }
};