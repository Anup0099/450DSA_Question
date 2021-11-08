//package BinaryTree;
//
//import java.util.Stack;
//
//public class CodeforcesCardDeck {
//    public static class Node{
//        int data;
//        Node left;
//        Node right;
//
//        Node(int data, Node left, Node right){
//            this.data = data;
//            this.left = left;
//            this.right = right;
//        }
//    }
//    public static class Pair{
//        Node node;
//        int state;
//
//        Pair(Node node, int state){
//            this.node = node;
//            this.state = state;
//        }
//    }
//    public static void main(String[] args) {
//    Integer[] arr ={50,25,12,null,null,37,30,null,null,75};
//
//    Node root = new Node(arr[0],null,null );
//    Pair rp = new Pair(root,1);
//        Stack<Pair> st = new Stack<Pair>();
//        st.push(rp);
//        int idx =1;
//        while(st.size()>0){
//            Pair top = st.peek();
//            if (top.state==1){
//                idx++;
//                if (arr[idx]!=null){
//                    Node ln = new Node(arr[idx],null,null);
//                    top.node.left =ln;
//                    Pair lp = new Pair(top.node.left)
//                }
//                top.state++;
//            }else if(top.state==2){
//
//            }else{
//                st.pop();
//            }
//        }
//    }
//}
