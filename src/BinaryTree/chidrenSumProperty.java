package BinaryTree;

public class chidrenSumProperty {
    public static int isSumProperty(NodeB root) {
        // add your code here

        if(root==null||root.left==null&&root.right==null)
            return 1;
        else if(root.left!=null||root.right!=null){
            int sum=0;
            if(root.left!=null)
                sum+=root.left.data;
            if(root.right!=null)
                sum+=root.right.data;
            if(sum==root.data)
                return (1&(isSumProperty(root.left)&isSumProperty(root.right)));
            else
                return 0;
        }
        return 1;

    }

    public static boolean isSum(NodeB root) {
        if (root == null) return false;
        if (root.left == null && root.right == null)
            return true;//for single node
        int sum = 0;
        if (root.left != null) sum += root.left.data;
        if (root.right != null) sum += root.right.data;
        if (sum == root.data) return isSum(root.left) && isSum(root.right);
        return false;
    }

    public static void main(String[] args) {

    }
}
