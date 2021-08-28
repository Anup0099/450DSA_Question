package Recursion;

public class decreasing {
    public static void main(String[] args) {
        int ne=9;
        printdecreasing(ne);
    }
    static  void printdecreasing(int n){
        if (n==0){
            return;
        }
        System.out.println(n);
        printdecreasing(n-1);
    }
}
