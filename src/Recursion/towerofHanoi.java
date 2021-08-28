package Recursion;

public class towerofHanoi {
    public static void main(String[] args) {

    }
    static void toh(int n,int t1,int t2,int t3){
        if (n==0){
            return ;
        }
        toh(n-1,t1,t2,t3);
        System.out.println(n+"["+t1+"->"+t2+"]");
        toh(n-1,t3,t2,t1);
    }
}
