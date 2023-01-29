import java.util.ArrayList;
import java.util.Stack;

public class postorderTraversal {
    public class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;

        TreeNode(int x) {
            val = x;
        }
    }

    public class Solution {
        public ArrayList<Integer> postOrderTraversal(TreeNode root) {
            ArrayList<Integer> arr = new ArrayList<>();
            if (root == null)
                return arr;
            Stack<TreeNode> stack = new Stack<>();
            stack.push(root);
            TreeNode prev = null;
            while (!stack.empty()) {
                TreeNode curr = stack.peek();
                if (prev == null || prev.left == curr || prev.right == curr) {
                    // if prev is null is the situation for the root node
                    if (curr.left != null) {
                        stack.push(curr.left);
                    } else if (curr.right != null) {
                        stack.push(curr.right);
                    } else {
                        stack.pop();
                        arr.add(curr.val);
                    }
                } else if (curr.left == prev) {
                    if (curr.right != null) {
                        stack.push(curr.right);
                    } else {
                        stack.pop();
                        arr.add(curr.val);
                    }

                } else if (curr.right == prev) {
                    stack.pop();
                    arr.add(curr.val);
                }
            }
            return arr;

        }
    }

    public static void main(String[] args) {

    }

}
