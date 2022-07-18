
package Queue;

/**
 * arrayImplementation
 */
public class arrayImplementation {
   public static int size;
public static int capacity;
    public static int[] arr;
    arrayImplementation(int c){
        capacity = c;
        size=0;
        arr=new int[capacity];
    }
   static boolean isFull(){
        return size==capacity;
    }
    static boolean isEmpty(){
        return size==0;
    }
    static void enqueue(int x){
        if(isFull()){
            System.out.println("Queue is full");
            return;
        }
        arr[size]=x;
        size++;

    }

    public static void main(String[] args) {
            arrayImplementation obj = new arrayImplementation(5);
            obj.enqueue(1);
            obj.enqueue(2);
            obj.enqueue(3);
    }
}