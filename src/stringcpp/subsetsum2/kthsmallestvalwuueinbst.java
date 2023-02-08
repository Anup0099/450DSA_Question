package stringcpp.subsetsum2;

import java.util.ArrayList;
import java.util.List;
import java.util.Stack;

/**
 * kthsmallestvalwuueinbst
 */
public class kthsmallestvalwuueinbst {
    public class Treenode {
        int val;
        Treenode left, right;

        Treenode(int val) {
            this.val = val;

        }

        Treenode(int val, Treenode left, Treenode right) {
            this.val = val;
            this.left = left;
            this.right = right;

        }

    }

    public static int kthsmallestvalueinbst(Treenode root, in k) {
        List<Integer> arr = new ArrayList<>();
        Stack<Treenode> st = new Stack<>();
        Treenode curr = root;

        while (curr != null && !st.isEmpty()) {
            while (curr != null) {
                st.push(curr);
                curr = curr.left;
            }
            curr = st.firstElement();
            st.pop();
            arr.add(curr.val);
            curr = curr.right;
        }
        return arr.get(k - 1);
    }

    int ans = 0, count = 0;

    public void inorder(TreeNode root, int k) {
        if (root == null)
            return;
        inorder(root.left, k);
        count++;
        if (count == k) {
            ans = root.val;
            return;
        }
        inorder(root.right, k);

    }

    int min;
    long res = Long.MAX_VALUE;

    public void dfs(Treenode root) {
        if (root != null) {
            if (min < root.val && root.val < res) {
                res = root.val;
            } else if (min == root.val) {
                dfs(root.left);
                dfs(root.right);
            }
        }
    }

    public int findsecindminimum(Treenode root) {
        if (root == null)
            return -1;
        min = root.val;
        dfs(root);
        if (res < Long.MAX_VALUE) {
            return (int) res;
        } else {
            return -1;
        }
    }

    public static void main(String[] args) {
        

    }
}