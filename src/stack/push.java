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

    public static int[] nextGreaterelemnt(int[] nums,
                                          int[] query) {
        int arr1[] = solve(nums);
        HashMap<Integer, Integer> hm = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            hm.put(nums[i], arr1[i]);
        }
        int ans[] = new int[query.length];
        for (int i = 0; i < query.length; i++) {
            ans[i] = hm.get(query[i]);
        }
        return ans;


    }

    public boolean isValid(String s) {
        Stack<Character> st = new Stack<>();
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty()) {
                    return false;
                } else {
                    char r = st.peek();
                    st.pop();
                    if (r == '(' && ch != ')') {
                        return false;
                    } else if (r == '{' && ch != '}') {
                        return false;
                    } else if (r == '[' && ch != ']') {
                        return false;
                    }
                }
            }
        }
        return st.isEmpty();
    }

    public static void reverse(int n) {
        int ans = 0;
        while (n > 0) {
            ans = n % 10;
            n = n / 10;
            System.out.println(ans);
        }

    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        reverse(754);

    }
}
