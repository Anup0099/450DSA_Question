package backrtrackinggg;

import java.util.ArrayList;

public class maze {
    public static void main(String[] args) {
        System.out.println(count(3,3));
        paths("",3,3);
        System.out.println(pathsreturn("",3,3));
    }

    static int count(int r,
                     int c) {

        if (r == 1 || c == 1) {
            return 1;
        }
        int left = count(r - 1, c);
        int right = count(r, c - 1);
        return left + right;
    }
    static  void paths(String p ,int c,int r){
        if(r==1 && c==1){
            System.out.println(p);
            return;
        }
        if (r>1)
        {
            paths(p+'D',r-1,c);

        }
        if (c>1){
            paths(p+'R',r,c-1);
        }


    }
    static ArrayList<String> pathsreturn(String p , int c, int r){
        if(r==1 && c==1){
            ArrayList<String>list= new ArrayList<>();
            list.add(p);
            return list;
        }
        ArrayList<String>list = new ArrayList<>();
        if (r>1)
        {
            list.addAll(pathsreturn(p+'D',r-1,c));

        }
        if (c>1){
          list.addAll(  pathsreturn(p+'R',r,c-1));
        }
        return list;


    }


}
