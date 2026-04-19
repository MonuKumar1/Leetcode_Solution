/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int k) {

            int n = 0;
            ListNode cnt = head;

            while(cnt!=null){
                n++;
                cnt = cnt.next;
            }
            //n =1;
            int rem = n-k;//0
            
            cnt = head;

            while(rem>1){
                rem--;
                cnt = cnt.next;
            }
            if(rem==0)return cnt.next;
            if(cnt.next!=null) cnt.next = cnt.next.next;
            else return cnt.next=null;;

            return head;

        
    }
}