
class Solution {
    public void reorderList(ListNode head) {
        
        ListNode h1 = head, h2=head,h3=head;

        while(h1!=null && h2!=null && h2.next!=null){
            h1=h1.next;
            h2=h2.next.next;
        }

        ListNode prev=null, cur=h1, nxt;

        while(cur!=null){
            nxt = cur.next;
            cur.next=prev;
            prev=cur;
            cur=nxt;
        }
        ListNode it = h3,it2=prev;
        
        while(it2!=null && it2.next!=null){
            ListNode n1 = it.next, n2 = it2.next;
            it.next = it2;
            it2.next = n1;
            it = n1;
            it2 = n2;
        }

    }
}