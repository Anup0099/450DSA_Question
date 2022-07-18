package Queue;

class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}

public class LinkedistImplementation {
    Node front, rear;
    int size;

    LinkedistImplementation() {
        size = 0;
        this.front = null;
        this.rear = null;
    }

    void enqueue(int key) {

        // Create a new LL node
        Node temp = new Node(key);

        // If queue is empty, then new node is front and rear both
        if (this.rear == null) {
            this.front = this.rear = temp;
            return;
        }

        // Add the new node at the end of queue and change rear
        this.rear.next = temp;
        this.rear = temp;
    }

    public void dequeu() {
        if (front == null) {
            System.out.println("Queue is empty");
            return;
        }
        Node temp = front;
        front = front.next;

        System.out.println("Deleted element is " + temp.data);
    }

    public void getSize() {
        System.out.println("Size of queue is " + size);
    }

    public void printQueue() {
        Node temp = front;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        LinkedistImplementation obj = new LinkedistImplementation();
        obj.enqueue(1);
        obj.enqueue(2);
        obj.enqueue(3);
        obj.getSize();
        obj.printQueue();

        obj.dequeu();
    }
}

