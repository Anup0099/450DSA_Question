package string;

public class stringFromBinarytree {
    public class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;

        TreeNode() {
        }

        TreeNode(int val) {
            this.val = val;
        }

        TreeNode(int val,
                 TreeNode left,
                 TreeNode right) {
            this.val = val;
            this.left = left;
            this.right = right;
        }

        public String tree2str(TreeNode root) {
            StringBuilder str=new StringBuilder();
            preOrder(root,str);
            return str.toString();
        }

        private void preOrder(TreeNode curr,
                              StringBuilder str) {

            if (curr==null){
                return;
            }
            str.append(curr.val);
            if (curr.left==null && curr.right==null){
                return;
            }
            if (curr.left!=null){
                str.append("(");
                preOrder(curr.left,str);
                str.append(")");
            }
            if (curr.right!=null){
                if (curr.left==null){
                    str.append("()");
                }
                str.append("(");
                preOrder(curr.right,str);
                str.append(")");
            }
        }
        }

        public static void main(String[] args) {

        }
    }
