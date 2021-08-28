//package Graph;
//
//import java.util.ArrayList;
//import java.util.HashMap;
//
//public class intro {
//    private class Vertex{
//        HashMap<String,Integer>ngbrs= new HashMap<>();
//
//    }
//    private HashMap<String ,Vertex>vertices= new HashMap<>();
//    public void addVertex(String vname){
//        Vertex vtx = new Vertex();
//        vertices.put(vname,vtx);
//
//    }
//    public int numVertex(){
//        return vertices.size();
//    }
//    public void addEdge(String vname1,String vname2,int cost){
//        Vertex vt1 = vertices.get(vname1);
//        Vertex vt2 = vertices.get(vname2);
//        if (vt1==null || vt2==null || vt1.ngbrs.containsKey(vname2)){
//            return;
//        }
//        vt1.ngbrs.put(vname2,cost);
//        vt2.ngbrs.put(vname1,cost);
//    }
//    public void display(){
//        System.out.println("-------------");
//        ArrayList<String>keys = new ArrayList<>(vertices.keySet());
//        for (String key:keys
//             ) {
//            Vertex vtx = vertices.get(key);
//            String str = key + "->" +
//
//        }
//    }
//}
