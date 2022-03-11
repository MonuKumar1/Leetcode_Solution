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
    ListNode* rotateRight(ListNode* head, int k) {
       
        vector<int>v;
        ListNode* root=head,*root2=head;
        
        while(root)
        {
            v.push_back(root->val);
            root=root->next;
        }
        
        int n=v.size();
        if(n<=1)return head;
        k=k%n;
       
        int i=0;
        // root=head;
        while(root2 and i<k)
        {
            root2->val=v[(n-k+i)%n];
            i++;
            root2=root2->next;
        }
        i=0;
        while(root2 and i<n-k)
        {
           root2->val=v[i%n];
            i++;
            root2=root2->next; 
        }
        
        return head;
        
                              
        
    }
};