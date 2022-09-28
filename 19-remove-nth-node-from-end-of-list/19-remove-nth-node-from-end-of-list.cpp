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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return head; // if the LL is empty
        if(head->next==NULL) return NULL; // if it has only one element.
        
        int count=0;
        ListNode* temp=head;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        
        temp=head;
        if(count==n) // it is the first node which is to be deleted
        {
            head=head->next;
            delete(temp);
            return head;
        }
        
        // node just after del is to be deleted
        int del=count-n;
        ListNode* prev=NULL;
        
        while(del--)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next; // deletion performed here
        delete(temp);
        
        return head;
    }
};