public class sumofleafnodes {
    static class Node {
        int data;
        Node left, right;

        Node(int data) {
            this.data = data;
            left = null;
            right = null;
        }
    }

    static int sum;

    static void leafsum(Node root) {
        if (root == null) {
            return;
        }
        if (root.left == null && root.right == null) {
            sum += root.val;
        }

        leafsum(root.left);
        leafsum(root.right);
    }

    //find the height of  bianry tree
    

    public static void main(String[] args) {

    }

}
