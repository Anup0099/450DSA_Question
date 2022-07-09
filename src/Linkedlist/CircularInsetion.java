

/**
 * CircularInsetion
 */
public class CircularInsetion {
    CircularInsetion next;
    int data;
    //Constructor
    public CircularInsetion(int data) {
        this.data = data;

    }
    
    CircularInsetion insertAtBegin(CircularInsetion head,int x){
        CircularInsetion newNode = new CircularInsetion(x);
        if(head ==null){
            newNode.next = newNode;
        }else{
            CircularInsetion temp = head;
            while(temp.next!=head){
                temp = temp.next;
            }
            temp.next = newNode;
            newNode.next = head;
        }
        return newNode;
    }
  static  void printNode(CircularInsetion head){
        CircularInsetion temp = head;
        while(temp.next!=head){
            System.out.print(temp.data+" ");
            temp = temp.next;
        }
        System.out.println(temp.data);
    }
    public static void main(String[] args) {
        CircularInsetion head = null;
        head = head.insertAtBegin(head,1);
      printNode(head);
    }
}   