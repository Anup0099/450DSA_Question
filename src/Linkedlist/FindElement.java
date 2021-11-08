package Linkedlist;

public class FindElement {
    public static class Node {
        int data;
        Node next;

    }

    public static class Linkedlist {
        Node head;
        Node tail;
        int size;

        void addLast(int val) {
            Node temp = new Node();
            temp.next = null;
            temp.data = val;

            if (size == 0) {
                head = tail = temp;
            } else {
                tail.next = temp;
                tail = temp;
            }
            size++;


        }


        public int size() {
            return size;
        }

        public void display() {
            for (Node temp = head; temp != null; temp = temp.next) {
                System.out.print(temp.data + " ");
            }
            System.out.println();
        }
        public void addFirst(int val) {
            Node temp = new Node();
            temp.data = val;
            temp.next = head;
            head = temp;

            if(size == 0){
                tail = temp;
            }

            size++;
        }
        public void addAt(int idx, int val){
            // write your code here
            if (idx<0 || idx>size){
                System.out.println("invalid statemnet");
            }else if (idx==size){
                addLast(val);
            }else if (idx==0){
                addFirst(val);
            }else {
                Node node = new Node();
                Node temp= head ;
                for (int i = 0; i <idx-1 ; i++) {
                    temp=temp.next;
                }
                node.next=temp.next;
                temp.next=node;
                size++;
            }

        }

    }
}
