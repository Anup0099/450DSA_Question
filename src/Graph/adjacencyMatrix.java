package Graph;

import java.util.Scanner;
//it has major issue with the code disconnected graph will not work

public class adjacencyMatrix {
    public static void printDFSHelper(int edges[][],int sv,boolean vis[]){
        System.out.println("The vertices connected to "+sv+" are: ");
        vis[sv]=true;
        int n=edges.length;
        for(int i=0;i<n;i++){
            if(edges[sv][i]==1 && !vis[i]){
                printDFSHelper(edges,i,vis);
            }
        }
    }
    public static void printDFS(int edges[][],int sv){
        int n=edges.length;
        boolean vis[]=new boolean[n];
        for (int i=0;i<n;i++){
           if (!vis[i]){
               printDFSHelper(edges,i,vis);
           }
        }

    }
    public static void main(String[] args) {
        int n,e;
        Scanner scn= new Scanner(System.in);
        n=scn.nextInt();
        e=scn.nextInt();
        int edges[][]=new int[n][n];
        for (int i = 0; i <e ; i++) {
            int fv=scn.nextInt();
            int sv=scn.nextInt();
            edges[fv][sv]=1;
            edges[sv][fv]=1;
        }
        printDFS(edges,0);
    }
}
