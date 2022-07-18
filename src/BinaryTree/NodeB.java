package BinaryTree;

import static BinaryTree.printkNodesAtdistancek.printNodes;

public class NodeB {
    public int data;
   public NodeB left, right;

    public NodeB(int k) {
        data = k;
        left = null;
        right = null;
    }

    static void inorder(NodeB root) {
        if (root == null) return;
        inorder(root.left);
        System.out.print(root.data + " ");
        inorder(root.right);

    }
    static void preorder(NodeB root) {
        if (root == null) return;
        System.out.print(root.data + " ");
        preorder(root.left);
        preorder(root.right);
    }
    static void postorder(NodeB root) {
        if (root == null) return;
        postorder(root.left);
        postorder(root.right);
        System.out.print(root.data + " ");
    }
  static  int height (NodeB root) {
        if (root == null) return 0;
        return 1 + Math.max(height(root.left), height(root.right));
    }
    static  void  levelorder(NodeB root){
        int h = height(root);
        for (int i = 0; i <= h; i++) {
            printNodes(root, i);

            System.out.println();
        }
    }
static void print(NodeB root) {
        if (root == null) return;
        System.out.print(root.data + " ");
        print(root.left);
        print(root.right);
    }
    public static void main(String[] args) {
        NodeB root = new NodeB(1);
        root.left = new NodeB(2);
        root.right = new NodeB(3);
        root.left.left = new NodeB(4);
        root.left.right = new NodeB(5);
        inorder(root);
        print(root);
        System.out.println();
        System.out.println(height(root));
        levelorder(root);
    }
}

