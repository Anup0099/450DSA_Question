package BinaryTree;

public class SizeofBinaryTree {
    static int sizeofTree(NodeB root) {
        if (root == null) return 0;
        return 1 + sizeofTree(root.left) + sizeofTree(root.right);
    }
    public static void main(String[] args) {
        NodeB root = new NodeB(1);
        root.left = new NodeB(2);
        root.right = new NodeB(3);
        root.left.left = new NodeB(4);
        root.left.right = new NodeB(5);
        System.out.println(sizeofTree(root));
    }
}
