package Linkedlist;

public class circular {
    private class Node{
        int val;
        Node next;
        public Node (int val){
            this.val = val;
        }
    }
    private Node head;
    private Node tail;
    public circular(){
        this.head= head;
        this.tail = tail;
    }
    public void insert(int val){
        Node node = new Node(val);
        if (head==null){
            head = node;
            tail=node;
            return;
        }
        tail.next=node;
        node.next= head;
        tail=node;


    }
    public void display(){
        Node node = head;
        if (head!=null){
            do{
                System.out.println(node.val+"->");
                node= node.next;

            }while (node!=head);



        }
    }
    public static void main(String[] args) {

    }
}
