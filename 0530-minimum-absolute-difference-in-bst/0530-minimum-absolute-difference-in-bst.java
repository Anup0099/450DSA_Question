/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int getMinimumDifference(TreeNode root) {
        List<Integer> list = new ArrayList<>();
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        while (q.isEmpty() == false) {
            TreeNode temp = q.poll();
            list.add(temp.val);
            if (temp.left != null) {
                q.add(temp.left);
            }
            if (temp.right != null) {
                q.add(temp.right);
            }

        }
        Collections.sort(list);
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < list.size() - 1; i++) {
            min = Math.min(min, list.get(i + 1) - list.get(i));
        }
        return min;
    }
}