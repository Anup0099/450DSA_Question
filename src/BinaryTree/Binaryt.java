package BinaryTree;

import java.util.Scanner;

public class Binaryt {
    private class Node{
        int data;
        Node left;
        Node right;
    }
    private Node root;
    private int size;
    public  Binaryt(){
        this.root=takeInput(new Scanner(System.in),null,true);

    }
    public Node takeInput(Scanner scn,Node parent,boolean ilc){
        if(parent==null){
            System.out.println("root node data");

        }else {

        }
        return root;
    }
}
