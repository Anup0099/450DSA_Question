package Linkedlist;



public class Middle {
    int val;
     Middle next;
    Middle (){};
    Middle (int val){
        this.val = val;
    }
    Middle(int val,Middle next){
        this.next = next;
        this.val = val;
    }

    public Middle middleOf (Middle head){
        Middle slow = head,fast=head;
        while (fast!=null && fast.next!=null){
            slow = slow.next;
            fast=fast.next.next;
        }
        return slow;


    }

    public static void main(String[] args) {
        Middle m = new Middle();

    }
}
