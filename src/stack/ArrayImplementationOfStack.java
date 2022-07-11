/**
 * ArrayImplementationOfStack
 */
public class ArrayImplementationOfStack {
    int top;
    int capacity;
    int arrr[];

    ArrayImplementationOfStack(int c) {
        top = -1;
        capacity = c;
        arrr = new int[c];
    }

    void push(int x) {
        top++;
        arrr[top] = x;
    }
    int size(){
        return top+1;
    }
    boolean isEmpty(){
        return top==-1;
    }

    int pop() {
        int res = arrr[top];
        top--;
        return res;
    }

    public static void main(String[] args) {
            ArrayImplementationOfStack s = new ArrayImplementationOfStack(5);
            s.push(34);
            s.push(349);
            System.out.println(s.pop());
            s.push(45);
            System.out.println(s.isEmpty());
        
    }
}