//package Recursion;
//
//import java.util.ArrayList;
//
//public class maze {
//    public static void main(String[] args) {
//
//    }
//    static ArrayList<String> paths(int sr,int sc,int dr,int dc ){
//        ArrayList<String>hpaths = new ArrayList<String>();
//        ArrayList<String>vpaths = new ArrayList<String>();
//        if (sc< dc){
//            hpaths = paths(sr,sc+1,dr,dc);
//
//        }
//        if (sr<dr){
//            vpaths = paths(sr+1,sc,dr,dc);
//        }
//        ArrayList<String>paths = new ArrayList<String>();
//
//        for (String hpath:hpaths){
//            paths.add("h"+hpath);
//        }
//
//    }
//}
