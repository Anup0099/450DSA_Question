package Linkedlist;

public class Doublylinkedlist {
    int data ;
    Doublylinkedlist next ;
    Doublylinkedlist prev ;
    Doublylinkedlist(int data){
        data = data ;
        next = null ;
        prev = null ;
    }
    public Doublylinkedlist add(Doublylinkedlist head,int data){
        Doublylinkedlist temp = new Doublylinkedlist(data) ;
        temp.next = head ;
        if(head != null){
            head.prev = temp ;
        }
        return temp ;
    }
   public static void printNode(Doublylinkedlist head){
        Doublylinkedlist temp = head ;
        while(temp != null){
            System.out.println(temp.data) ;
            temp = temp.next ;
        }
    }
    public static void main(String[] args) {
        Doublylinkedlist head = new Doublylinkedlist(1) ;
        Doublylinkedlist second = new Doublylinkedlist(2) ;
        Doublylinkedlist third = new Doublylinkedlist(3) ;
        Doublylinkedlist fourth = new Doublylinkedlist(4) ;
        Doublylinkedlist fifth = new Doublylinkedlist(5) ;
        head.next = second ;
        head.prev = null ;
        second.next = third ;
        second.prev = head ;
        third.next = fourth ;
        third.prev = second ;
        fourth.next = fifth ;
        fourth.prev = third ;
        fifth.next = null ;
        fifth.prev = fourth ;
        printNode(head) ;

    }
}
