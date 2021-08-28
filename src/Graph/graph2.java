package Graph;

import java.util.ArrayList;
import java.util.*;


public class graph2 {
    static class Edge{
        int sr;
        int ngbr;
        int wt;
        Edge(int srt,int ngbr,int wt){
            this.ngbr=ngbr;
            this.wt=wt;
            this.sr=sr;
        }
    }
    public static void main(String[] args)throws Exception {

        int vces = 7;
        ArrayList<Edge>[]graph = new ArrayList[7];
        for (int i = 0; i <vces ; i++) {
            graph[i] = new ArrayList<Edge>();
        }
        graph[0].add(new Edge(0,3,40));


    }
}
