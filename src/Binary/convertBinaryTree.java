package Binary;

import BinaryTree.NodeB;

public class convertBinaryTree {
    public static NodeB prev = null;

    static NodeB convert(NodeB root) {
        if (root == null) return null;
        NodeB head = convert(root.left);
        if (prev == null) {
            head = root;
        } else {
            root.left = prev;
            prev.right = root;
        }
        prev = root;
        convert(root.right);
        return head;
    }
    static void printList(NodeB node)
    {
        while (node != null)
        {
            System.out.print(node.data + " ");
            node = node.right;
        }
    }

    public static void main(String[] args) {
        NodeB root = new NodeB(10);
        root.left = new NodeB(5);
        root.right = new NodeB(20);
        root.right.left = new NodeB(30);
        root.right.right = new NodeB(35);

        NodeB head = convert(root);
        printList(head);
    }
}
