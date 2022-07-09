package Linkedlist;

import java.util.HashMap;
import java.util.Map;

public class Node {
    int val;
    Node next;
    Node random;

    Node() {
    }


  public  Node(int val) {
        this.val = val;
        this.next = null;
        this.random = null;
    }
    public Node copyRandomList(Node head) {
        Node iter = head;
        Node front = head;

        // First round: make copy of each node,
        // and link them together side-by-side in a single list.
        while (iter != null) {
            front = iter.next;

            Node copy = new Node(iter.val);
            iter.next = copy;
            copy.next = front;

            iter = front;
        }

        // Second round: assign random pointers for the copy nodes.
        iter = head;
        while (iter != null) {
            if (iter.random != null) {
                iter.next.random = iter.random.next;
            }
            iter = iter.next.next;
        }

        // Third round: restore the original list, and extract the copy list.
        iter = head;
        Node pseudoHead = new Node(0);
        Node copy = pseudoHead;

        while (iter != null) {
            front = iter.next.next;

            // extract the copy
            copy.next = iter.next;
            copy = copy.next;

            // restore the original list
            iter.next = front;

            iter = front;
        }

        return pseudoHead.next;
    }
    Node head;
//    public Node clone()
//    {
//        // Initialize two references, one with original
//        // list's head.
//        Node origCurr = this.head, cloneCurr = null;
//
//        // Hash map which contains node to node mapping of
//        // original and clone linked list.
//        Map<Node, Node> map = new HashMap<Node, Node>();
//
//        // Traverse the original list and make a copy of that
//        // in the clone linked list.
//        while (origCurr != null)
//        {
//            cloneCurr = new Node(origCurr.val);
//            map.put(origCurr, cloneCurr);
//            origCurr = origCurr.next;
//        }
//
//        // Adjusting the original list reference again.
//        origCurr = this.head;
//
//        // Traversal of original list again to adjust the next
//        // and random references of clone list using hash map.
//        while (origCurr != null)
//        {
//            cloneCurr = map.get(origCurr);
//            cloneCurr.next = map.get(origCurr.next);
//            cloneCurr.random = map.get(origCurr.random);
//            origCurr = origCurr.next;
//        }
//
//        //return the head reference of the clone list.
//        return new Node(map.get(this.head));
//    }

    public static void main(String[] args) {

    }
}
