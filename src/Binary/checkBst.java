package Binary;

import BinaryTree.NodeB;

public class checkBst {
  public  static   boolean isBST(NodeB root)
    {
        // code here.
        if(root==null)
            return true;
        if(root.left!=null)
        {
            if(root.left.data>root.data)
                return false;
            if(!isBST(root.left))
                return false;
        }
        if(root.right!=null)
        {
            if(root.right.data<root.data)
                return false;
            if(!isBST(root.right)) //isBst(root.right) is the function call
                // to check if the right subtree is a BST or not.
                return false;
        }
        return true;
    }



    public static void main(String[] args) {

    }
}
