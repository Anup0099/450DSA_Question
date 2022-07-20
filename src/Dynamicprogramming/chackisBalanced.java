package Dynamicprogramming;

import BinaryTree.NodeB;

import static Binary.diameterOFBinaryTree.height;

public class chackisBalanced {
    public static Boolean isBalanced(NodeB root) {
        return height(root) != -1;

    }

    public static int height(NodeB root) {
        if (root == null) {
            return -1;
        }
        int leftHeight = height(root.left);
        if (leftHeight == -1) {
            return -1;
        }
        int rightHeight = height(root.right);
        if (rightHeight == -1) {
            return -1;
        }
        if (Math.abs(leftHeight - rightHeight) > 1) {
            return -1;
        }
        return Math.max(leftHeight, rightHeight) + 1;
    }

    public static void main(String[] args) {
        NodeB root = new NodeB(1);
        root.left = new NodeB(2);
        root.right = new NodeB(3);
        root.left.left = new NodeB(4);
        System.out.println(isBalanced(root));
    }
}
