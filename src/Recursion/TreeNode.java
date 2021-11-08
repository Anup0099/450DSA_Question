package Recursion;

public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode() {
    }

    TreeNode(int val) {
        this.val = val;
    }

    TreeNode(int val,
             TreeNode left,
             TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

class Solution {
    public static int maxDepth(TreeNode root) {
     if (root==null || root.val==0)return 0;

     int right = maxDepth(root.right);
     int left = maxDepth(root.left);
     return  1+ Math.max(right,left);

    }

    public static void main(String[] args) {
        TreeNode nodes = new TreeNode(2);

    }
}