//package com.company;
//
//
//class LinkedList<I extends Number> {
//    Node head;  // head of list
//
//
//    class Node {
//        int data;
//        Node next;
//
//        Node(int d) {
//            data = d;
//            next = null;
//        }
//    }
//
//    /* Inserts a new Node at front of the list. */
//    void push(int new_data) {
//
//        Node new_node = new Node(new_data);
//
//
//        new_node.next = head;
//
//
//        head = new_node;
//    }
//
//
//    void merge(LinkedList<Number> q) {
//        Node p_curr = head, q_curr = q.head;
//        Node p_next, q_next;
//
//        // While there are available positions in p;
//        while (p_curr != null && q_curr != null) {
//
//
//            p_next = p_curr.next;
//            q_next = q_curr.next;
//
//
//            q_curr.next = p_next;
//            p_curr.next = q_curr;
//
//
//            p_curr = p_next;
//            q_curr = q_next;
//        }
//        q.head = q_curr;
//    }
//
//    /* Function to print linked list */
//    void printList() {
//        Node temp = head;
//        while (temp != null) {
//            System.out.print(temp.data + " ");
//            temp = temp.next;
//        }
//        System.out.println();
//    }
//
//    /* Driver program to test above functions */
//    public static void main(String args[]) {
//        LinkedList<Number> llist1 = new LinkedList<Number>();
//        LinkedList<Number> llist2 = new LinkedList<Number>();
//        llist1.push(3);
//        llist1.push(2);
//        llist1.push(1);
//
//        System.out.println("First Linked List:");
//        llist1.printList();
//
//        llist2.push(8);
//        llist2.push(7);
//        llist2.push(6);
//        llist2.push(5);
//        llist2.push(4);
//
//        System.out.println("Second Linked List:");
//
//        llist1.merge(llist2);
//
//        System.out.println("Modified first linked list:");
//        llist1.printList();
//
//        System.out.println("Modified second linked list:");
//        llist2.printList();
//    }
//}