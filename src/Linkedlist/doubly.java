package Linkedlist;

public class doubly {
    public static class node {
        int data;
        node prev;
        node next;

        public node(int data) {
            this.data = data;
            this.next = next;
            this.prev = prev;
        }

    }

    static void insert(node head,
                       int data) {
        node temp = new node(data);
        temp.next = head;
        head.prev = temp;
        head = temp;
    }

    static void print(node head) {
        node temp = head;
        while (temp != null) {
            System.out.println(temp.data);
            temp = temp.next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        node node1 = new node(10);
        node head = node1;
        print(head);
        insert(head, 11);
        print(head);


    }
}
