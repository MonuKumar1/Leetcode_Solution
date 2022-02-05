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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>v;
        int n=lists.size();
        if(n==0)return NULL;
        for(int i=0;i<n;i++)
        {
            ListNode* head=lists[i];
            while(head!=NULL)
            {
                v.push_back(head->val);
                head=head->next;
            }  
            
        }
        sort(v.begin(),v.end());
        ListNode *head = NULL,*temp;
        for(int i=0;i<v.size();i++)
        {
        ListNode* newNode=new ListNode();
        newNode->val=v[i];
            newNode->next=NULL;
            if(head==NULL)head=temp=newNode;
            else
            {
                temp->next=newNode;
                temp=newNode;
            }
    }
    
    return head;}
};