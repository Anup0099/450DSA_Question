package cf;

import java.util.*;

public class max {
public static int[] solve(int[]arrr){
    int[]span = new int[arrr.length];
    Stack<Integer>st
= new Stack<>();
    st.push(0);
    span[0]=1;
    for (int i = 1; i < arrr.length ; i++) {
        while (st.size()>0 && arrr[i]>arrr[st.peek()]){
            st.pop();
        }
        if (st.size()==0){
            span[i]=i+1;
        }else{
            span[i]=1-st.peek();
        }
        st.push(i);
    }
    return span;
}

    public static void main(String[] args) {

    }

}
