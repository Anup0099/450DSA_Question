package Graph;

import java.util.ArrayList;
import java.util.Arrays;

public class detectacyleinuddfs {
    static boolean chekforcyle(int node,
                               int parent,
                               boolean vis[],
                               ArrayList<ArrayList<Integer>> adj) {
        vis[node] = true;
        for (Integer it : adj.get(node)//list of nodes that are adjacent
            // traversing the adjacency list
        ) {

            if (vis[it] == false) {
                if (chekforcyle(it, node, vis, adj)) return true;
//                vis[it]=true;
            } else if (it != parent)//any adjacent node other than previous node
            // has been visited then the graph is cyclic
            {
                return true;
            }
        }
        return false;
    }

    public boolean isCycle(int v,
                           ArrayList<ArrayList<Integer>> adj) {
        boolean vis[] = new boolean[v + 1];
        Arrays.fill(vis, false);
        for (int i = 1; i <= v; i++) {
            if (vis[i] = false) {
                if (chekforcyle(i, -1, vis, adj)) return true;

            }
        }
        return false;
    }

    public static void main(String[] args) {

    }
}
