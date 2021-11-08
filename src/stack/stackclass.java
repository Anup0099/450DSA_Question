package stack;

public class stackclass {
    class MyStack
    {
        int []a;
        int top;
        int capacity;

        public  MyStack(int capacity){
            this.capacity=capacity;
            top =-1;
            a = new int[capacity];

        }

        void push(int data){
            if (top==capacity-1)return ;
            top++;
            a[top]=data;
        }
        int pop(){
            if (top==-1){
                return  0;
            }
           int res = a[top];
            top--;
            return res;
        }
        int peek(){
            if (top==-1){
                return  0;
            }
            
            return a[top];
        }

        boolean isEmpty(){
            return top==-1;
        }
    }
    public static void main(String[] args) {

    }
}
