

import java.util.*;

class palindrome {
    public static class ListNode {
        int val = 0;
        ListNode next = null;

        ListNode(int val) {
            this.val = val;
        }
    }

    public static  ListNode middleNode(ListNode head){
        if (head == null || head.next ==null)return head;
        ListNode slow = head;
        ListNode fast = head;

        while(fast.next !=null && fast.next.next !=null){
            slow = slow.next;
            fast = fast.next.next;

        }
        return  slow;
    }

    public static ListNode reverseOf(ListNode head) {
        if (head == null || head.next==null)return head;
        ListNode prev = null;
        ListNode curr = head;
        ListNode forw = null;
        while(curr != null){
            forw = curr.next;
            curr .next = prev;
            prev = curr;
            curr = forw;
        }
        return prev;
    }

    public static boolean isPalindrome(ListNode head) {
        if (head==null || head.next ==null){
            return  true;
        }
        ListNode middle = middleNode(head);
        ListNode nhead = middle.next;
        nhead = reverseOf(nhead);
        ListNode c1 = head;
        ListNode c2 = nhead;
        boolean flag = true;
        while (c1 !=null && c2 !=null){
            if (c1.val != c2.val){
                flag = false;
                break;
            }
            c1 = c1.next;
            c2 = c2.next;
        }
        nhead = reverseOf(nhead);
        middle.next= head;
        return flag;

    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        ListNode dummy = new ListNode(-1);
        ListNode prev = dummy;
        while (n-- > 0) {
            prev.next = new ListNode(scn.nextInt());
            prev = prev.next;
        }

        System.out.println(isPalindrome(dummy.next));
        scn.close();
    }
}