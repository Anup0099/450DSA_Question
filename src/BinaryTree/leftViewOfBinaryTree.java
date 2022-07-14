package BinaryTree;

import java.util.LinkedList;
import java.util.Queue;

/**
 * leftViewOfBinaryTree
 */
public class leftViewOfBinaryTree {
  public  static   void leftview(NodeB root) {
        if (root == null) return;
        Queue<NodeB> q = new LinkedList<>();
        q.add(root);
        while (q.isEmpty() == false) {
            int count = q.size();
            for (int i = 0; i < count; i++) {
                NodeB curr = q.poll();
                if (i == 0)
                    System.out.print(curr.data + " ");
                if (curr.left != null) {
                    q.add(curr.left);
                }
                if (curr.right != null) {
                    q.add(curr.right);
                }
            }
        }
    }



    public static void main(String[] args) {
        NodeB root = new NodeB(1);
        root.left = new NodeB(2);
        root.right = new NodeB(3);
        root.left.left = new NodeB(4);
        root.left.right = new NodeB(5);
        leftview(root);

    }
}