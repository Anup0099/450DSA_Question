package Graph;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;

class Node {
    int first;
    int second;
    public  Node(int first,int second){
        this.first= first;
        this.second = second;

    }
}
public class Dfs {
    static boolean checkForCycle(ArrayList<ArrayList<Integer>>adj,int s,
                                 boolean vis[]){
        Queue<Node>q= new LinkedList<>();
        q.add(new Node(s,-1));
        vis[s]=true;
        while (!q.isEmpty()){
            int node = q.peek().first;
            int por = q.peek().second;
            q.remove();
            for (Integer it:adj.get(node)){
                if (vis[it]==false){
                    q.add(new Node(it,node));
                    vis[it]=true;
                }
                else if (por !=it)return true;
            }
        }
        return false;
    }
    public boolean isCycle(int v,ArrayList<ArrayList<Integer>>adj){
        boolean vis[]= new boolean[v+1];
        Arrays.fill(vis,false);
        for (int i = 1; i <=v ; i++) {
            if (vis[i]==false){
                if (checkForCycle(adj,i,vis)){
                    return true;
                }
            }
        }
        return false;
    }
    public static void main(String[] args) {

    }
}
