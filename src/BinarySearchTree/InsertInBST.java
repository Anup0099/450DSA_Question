package BinarySearchTree;

import BinaryTree.NodeB;

public class InsertInBST {
    static NodeB insert(NodeB root,int  x){
        if (root==null){
            return new NodeB(x);
        }
        else if (x<root.data){
            root.left=insert(root.left,x);
        }
        else{
            root.right=insert(root.right,x);
        }
        return root;
    }
    public static void main(String[] args) {

    }
}
