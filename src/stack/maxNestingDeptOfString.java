

import java.util.Stack;

/**
 * maxNestingDeptOfString
 */
public class maxNestingDeptOfString {
    public static int maxDepth(String s) {
        int count = 0;
        Stack<Integer> stack = new Stack<>();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(') {
                stack.push(i);
            } else if (s.charAt(i) == ')') {
                count = Math.max(count, stack.size());
                stack.pop();
            }
        }

        return count;
    }

    public static void main(String[] args) {
        String s ="(((22))";
        System.out.println(maxDepth(s));
    }
}