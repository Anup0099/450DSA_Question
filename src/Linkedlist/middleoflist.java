

/**
 * middleoflist
 */
 class middleoflist {
     int val;
     middleoflist next;
        middleoflist (){};
        middleoflist (int val){
            this.val = val;
        }
        middleoflist (int val, middleoflist next){
            this.val = val;
            this.next = next;
        } 
        public static middleoflist middleNode(middleoflist head) {
            middleoflist slow = head;
            middleoflist fast = head;
            while (fast != null && fast.next != null) {
                slow = slow.next;
                fast = fast.next.next;
            }
            return slow;
        }
    public static void main(String[] args) {
            middleoflist head = new middleoflist(1);
            head.next = new middleoflist(2);
            head.next.next = new middleoflist(3);
            head.next.next.next = new middleoflist(4);
            head.next.next.next.next = new middleoflist(5);
            head.next.next.next.next.next = new middleoflist(6);
            middleNode(head);
    }
}
