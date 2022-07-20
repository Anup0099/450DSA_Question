package BinaryTree;

public class lowestCommonAncestor {
    public static NodeB lowestCommonAncestor(NodeB root,
                                             NodeB p,
                                             NodeB q) {
        if (root == null || root == p || root == q) {
            return root;
        }
        NodeB left = lowestCommonAncestor(root.left, p, q);
        NodeB right = lowestCommonAncestor(root.right, p, q);
        //result
        if (left == null) {
            return right;
        } else if (right == null) {
            return left;
        } else {

            //if both left and right are not null,we got our answer then return
            // root
            return root;
        }
    }

    public static void main(String[] args) {
        NodeB root = new NodeB(1);
        root.left = new NodeB(2);
        root.right = new NodeB(3);
        root.left.left = new NodeB(4);
        root.left.right = new NodeB(5);
        root.right.left = new NodeB(6);
        root.right.right = new NodeB(7);
        NodeB p = root.left.left;
        NodeB q = root.right.right;
        NodeB result = lowestCommonAncestor(root, p, q);
        System.out.println(result.data);

    }
}
