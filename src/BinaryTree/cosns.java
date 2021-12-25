package BinaryTree;

public class cosns {
    public static class Node{
        int data;
        Node left;
        Node right;

        Node(int data, Node left, Node right) {
            this.data = data;
            this.left = left;
            this.right = right;
        }

    }
    public static Node construct (int arr[],int lo,int hi){
        if (lo>hi){
            return null;
        }
        int mid = (lo+hi)/2;
        int data = arr[mid];
        Node lc = construct(arr,lo,mid-1);
        Node rc = construct(arr,hi,mid+1);

        Node node = new Node(data,lc,rc);
        return  node;



    }
    public static void main(String[] args) {

    }
}
