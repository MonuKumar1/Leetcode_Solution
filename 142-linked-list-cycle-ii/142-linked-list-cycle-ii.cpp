/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
         ListNode* fast = head;
        ListNode* slow = head;
        if(head == NULL)
        {
            return NULL;
        }
        if(fast->next == NULL)
        {
            return NULL;
        }
        if(fast->next->next == NULL)
        {
            return NULL;
        }
        while(fast->next && fast->next->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)
            {
                fast = head;
                while(fast !=slow)
                {
                    fast = fast->next;
                    slow = slow->next;
                }
                return fast;
            }
        }
        return NULL;
        
    }
//      if (head == NULL || head->next == NULL)
//         return NULL;
    
//     ListNode *slow  = head;
//     ListNode *fast  = head;
//     ListNode *entry = head;
    
//     while (fast->next && fast->next->next) {
//         slow = slow->next;
//         fast = fast->next->next;
//         if (slow == fast) {  
//             // return slow->next;
//             while(slow != entry) {             
//                 slow  = slow->next;
//                 entry = entry->next;
//             }
//             return entry;
//         }
//     }
//     return NULL;      
//     }
};