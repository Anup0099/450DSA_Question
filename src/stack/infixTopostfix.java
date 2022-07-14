package stack;

import java.util.Stack;

public class infixTopostfix {
    int minEle;
    Stack<Integer> s;

    /*returns min element from stack*/
    int getMin() {
        // Your code here
        if (s.isEmpty()) {
            return -1;
        } else {
            return minEle;
        }



    }

    /*returns poped element from stack*/
    int pop() {
        // Your code here
        if (s.isEmpty()) {
            return -1;
        } else {
            int x = s.pop();
            if (x < minEle) {
                minEle = x;
            }
            return x;
        }
    }

    /*push element x into the stack*/
    void push(int x) {
        // Your code here

        if (s.size() == 0) {
            s.push(x);
            minEle = x;

        } else if (x > minEle) {

            s.push(x);
        } else {
            s.push(2 * x - minEle);
            minEle = x;
        }
    }

    public static void main(String[] args) {

    }
}
