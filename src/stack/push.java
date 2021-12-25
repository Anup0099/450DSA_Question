package stack;

import java.util.HashMap;
import java.util.Scanner;
import java.util.Stack;

public class push {

    public static String remove(String s) {
        Stack<Character> st = new Stack<>();
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            if (ch == '(') {
                if (st.size() > 0) {
                    sb.append(ch);
                }
                st.push(ch);
            } else {
                st.pop();
                if (st.size() > 0) {
                    sb.append(ch);
                }
            }
        }
        return sb.toString();

    }

    public static int[] solve(int[] arr) {
        int[] nge = new int[arr.length];
        Stack<Integer> st = new Stack<>();
        st.push(arr[arr.length - 1]);
        nge[arr.length - 1] = -1;
        for (int i = arr.length - 2; i >= 0; i--) {
            while (st.size() > 0 && arr[i] >= st.peek()) {
                st.pop();
            }
            if (st.size() == 0) {
                nge[i] = -1;
            } else {
                nge[i] = st.peek();
            }
            st.push(arr[i]);
        }
        return nge;
    }
public static int[] nextGreaterelemnt(int[]nums,int []query){
        int arr1[]= solve(nums);
    HashMap<Integer,Integer>hm= new HashMap<>();
    for (int i = 0; i < nums.length; i++) {
        hm.put(nums[i],arr1[i]);
    }
    int ans[] = new int[query.length];
    for (int i = 0; i < query.length ; i++) {
        ans[i]=hm.get(query[i]);
    }
    return ans;
        
        
}
    public static void main(String[] args) {
        int[] arr = {1, 2, 8, 56, 56, 9};
        System.out.println(solve(arr));
        System.out.println(remove("(())"));
    }
}
