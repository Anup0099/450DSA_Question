package BinarySearchTree;

import BinaryTree.NodeB;

public class SearchInBST {
    static boolean search(NodeB root,
                          int x) {
        if (root == null) {
            return false;
        } else if (root.data == x) {
            return true;
        } else if (root.data > x) {
            return search(root.left, x);
        } else {
            return search(root.right, x);
        }

    }
//WHILE LOOP (root != null) {same conditon as in recursive code}
    public static void main(String[] args) {
        NodeB root = new NodeB(10);
        root.left = new NodeB(5);
        root.right = new NodeB(15);
        root.left.left = new NodeB(1);
        root.left.right = new NodeB(7);
        root.right.left = new NodeB(12);
        root.right.right = new NodeB(20);
        System.out.println(search(root, 10));
        System.out.println(search(root, 12));


    }
}
