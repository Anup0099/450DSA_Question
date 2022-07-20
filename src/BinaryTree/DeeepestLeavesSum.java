package BinaryTree;

public class DeeepestLeavesSum {
    static int sum = 0;
    static int maxDepth = 0;

    public static int deepestSum(NodeB root) {
        findSum(root, 1);
        return sum;
    }

    private static void findSum(NodeB root,
                                int curr) {
        if (root != null) {
            if (curr > maxDepth) {
                sum = 0;
                maxDepth = curr;
            }
            if (curr == maxDepth) {
                sum += root.data;
            }
            findSum(root.left, curr + 1);
            findSum(root.right, curr + 1);
        }

    }

    public static void main(String[] args) {

    }
}
