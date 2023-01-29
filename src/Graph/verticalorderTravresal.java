import java.util.TreeMap;
import java.util.Vector;

/**
 * verticalorderTravresal
 */
public class verticalorderTravresal {
    static class Node {
        int key;
        Node left;
        Node right;

        Node(int data) {
            key = data;
            left = null;
            right = null;

        }
    }

    static void getPreorder(Node root, int hd, TreeMap<Integer, Vector<Integer>> m) {
        if (root == null) {
            return;

        }
        Vector<Integer> get = m.get(hd);
        if (get == null) {
            get = new Vector<>();
            get.add(root.key);
        } else {
            get.add(root.key);
        }
        m.put(hd, get);
        getPreorder(root.left, hd-1, m);
        getPreorder(root.right, hd+1, m);
    }
    

    public static void main(String[] args) {

    }
}