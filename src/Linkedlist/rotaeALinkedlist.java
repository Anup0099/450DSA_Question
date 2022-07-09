//package Linkedlist;
//
////public class ListNode {
////    int val;
////    ListNode next;
////
////    ListNode() {
////    }
////
////    ListNode(int val) {
////        this.val = val;
////    }
////
////    ListNode(int val,
////             ListNode next) {
////        this.val = val;
////        this.next = next;
////    }
////}
//
//public class ListNode {
//    int val;
//        ListNode next;
//
//    ListNode() {
//    }
//
//    ListNode(int val) {
//        this.val = val;
//    }
//
//    ListNode(int val,
//             ListNode next) {
//        this.val = val;
//        this.next = next;
//    }
//    public static ListNode rotateRight(ListNode head, int k) {
//        if(head==null ||head.next==null || k==0)
//            return head;
//        ListNode curr=head;
//        int count=1;
//        while(curr.next!=null){
//            curr=curr.next;
//            count++;
//        }
//        //go till next node
//        curr.next=head;
//        k=k%count;
//        k=count-k;
//        while(k-->0){
//            curr=curr.next;
//        }
//        head=curr.next;
//        curr.next=null;
//        return head;
//    }
//
//    public static void main(String[] args) {
//        ListNode head=new ListNode(1);
//        head.next=new ListNode(2);
//        head.next.next=new ListNode(3);
//        head.next.next.next=new ListNode(4);
//
//        head=rotateRight(head,2);
//    }
//}
