package BinarySearchTree;

import BinaryTree.NodeB;

import java.util.Map;
import java.util.TreeMap;

public class verticalSumInAbinaryTree {
    static void vSumR(NodeB root, int hd,
                      TreeMap<Integer, Integer> map) {
        if (root == null)return;
        vSumR(root.left, hd - 1, map);
        int pSum=(map.get(hd)==null)?0:map.get(hd);
        map.put(hd, pSum+root.data);
        vSumR(root.right, hd + 1, map);

    }
    static void vSum(NodeB root) {
        TreeMap<Integer, Integer> map = new TreeMap<>();
        vSumR(root, 0, map);
        for(Map.Entry sum:map.entrySet()){
            System.out.println(sum.getKey()+" "+sum.getValue());
        }
    }

    public static void main(String[] args) {
        NodeB root = new NodeB(1);
        root.left = new NodeB(2);
        root.right = new NodeB(3);
        root.left.left = new NodeB(4);
        root.left.right = new NodeB(5);
        root.right.left = new NodeB(6);
        root.right.right = new NodeB(7);
        root.left.left.left = new NodeB(8);
        root.left.left.right = new NodeB(9);
        root.left.right.left = new NodeB(10);
        root.left.right.right = new NodeB(11);
        root.right.left.left = new NodeB(12);
        root.right.left.right = new NodeB(13);
        root.right.right.left = new NodeB(14);
        root.right.right.right = new NodeB(15);
        vSum(root);
    }
 }
