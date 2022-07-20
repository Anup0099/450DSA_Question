package Binary;

import BinaryTree.NodeB;

public class diameterOFBinaryTree {


    public static int diameter(NodeB root) {
        if (root == null) {
            return -1;
        }
        int leftHeight = height(root.left);
        int rightHeight = height(root.right);
        int leftDiameter = diameter(root.left);
        int rightDiameter = diameter(root.right);
        int sp = leftHeight + rightHeight + 2;
        int maxDiameter = Math.max(sp, Math.max(leftDiameter, rightDiameter));
        return maxDiameter;
    }

    public static int height(NodeB root) {
        if (root == null) {
            return -1;
        }
        int leftHeight = height(root.left);
        int rightHeight = height(root.right);
        return Math.max(leftHeight, rightHeight) + 1;
    }

    public static void main(String[] args) {
        NodeB root = new NodeB(1);
        root.left = new NodeB(2);
        root.right = new NodeB(3);
        root.left.left = new NodeB(4);

        System.out.println(diameter(root));
    }
}
