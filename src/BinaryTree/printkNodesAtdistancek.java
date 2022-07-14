package BinaryTree;

public class printkNodesAtdistancek {
  static   void printNodes(NodeB root,int k){
        if(root==null) return;
        if(k==0){
            System.out.print(root.data+" ");
        }else{
            printNodes(root.left,k-1);
            printNodes(root.right,k-1);
        }
    }
    public static void main(String[] args) {
        NodeB root = new NodeB(1);
        root.left = new NodeB(2);
        root.right = new NodeB(3);
        root.left.left = new NodeB(4);
        root.left.right = new NodeB(5);

        printNodes(root,2);
    }
}
