package Graph;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;

//class Node{
//    int first;
//    int second;
//    public Node(int first,int second){
//        this.first=first;
//        this.second= second;
//
//    }
//};
public class detectacyleinudbfs {
    public static boolean isCycle(int v,
                                  ArrayList<ArrayList<Integer>>adj){
        boolean vis[]=new boolean[v+1];
        Arrays.fill(vis,false);
        for (int i = 1; i < v; i++) {
            if (vis[i]==false){
                if (chckForCycle(adj,i,vis)){
                    return true;
                }
            }
        }
        return false;


    }

    private static boolean chckForCycle(ArrayList<ArrayList<Integer>> adj,
                                        int s,
                                        boolean[] vis) {
        Queue<Node>q= new LinkedList<>();
        q.add(new Node(s,-1));
        vis[s]=true;
        while (!q.isEmpty()){
            int node= q.peek().first;
            int parent= q.peek().first;
            q.remove();
            for (Integer it: adj.get(node)){
                if (vis[it]==false){
                    q.add(new Node(it,node));
                    vis[it]=true;
                }
                else if(parent!=it)return true;
            }
        }
        return false;
    }

    public static void main(String[] args) {

    }
}
