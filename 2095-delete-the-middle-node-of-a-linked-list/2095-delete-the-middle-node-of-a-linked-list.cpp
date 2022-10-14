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
    ListNode* deleteMiddle(ListNode* head) {
     
        ListNode* r=head;
        int n=0;
        while(r)
        {
            n++;
            r=r->next;
        }
        if(n==1)return NULL;
        int x=n/2;
        r=head;
        
        for(int i=0;i<x-1;i++)
            r=r->next;
        r->next=r->next->next;
        return head;
        
    }
};