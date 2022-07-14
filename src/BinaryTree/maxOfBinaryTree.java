package BinaryTree;

public class maxOfBinaryTree {
    static int maxOfTree(NodeB root) {
        if (root == null) return Integer.MIN_VALUE;
        return Math.max(root.data, Math.max(maxOfTree(root.left), maxOfTree(root.right)));

    }

    public static void main(String[] args) {
        NodeB root = new NodeB(1);
        root.left = new NodeB(2);
        root.right = new NodeB(3);
        root.left.left = new NodeB(4);
        root.left.right = new NodeB(5);
        System.out.println(maxOfTree(root));
    }
}
