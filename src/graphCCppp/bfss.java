import java.util.ArrayList;

public class bfss {
    void Bfs(ArrayList<ArrayList<Integer>> adj, int v, int s) {
        boolean vsited[] = new boolean[v + 1];
        Queue<Integer> q = new LinkedList<Integer>();
        visited[s] = true;
        q.add(s);
        while(q.isEmpty()==false){
            int u =q.poll();//poll means that it will remove the first element from the queue
            System.out.println(u);
            for(int it:adj.get(u)){
                if(visited[it]==false){
                    visited[it]=true;
                    q.add(it);
                }
            }
        }
    }

    public static void main(String[] args) {
        

    }
}
