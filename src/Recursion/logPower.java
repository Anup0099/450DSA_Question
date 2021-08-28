package Recursion;

public class logPower {
    public static void main(String[] args) {
        System.out.println(power(10,2));
    }
    static int power(int x,int n){
        if (n==0){
            return 1;
        }
        int no= power(x,n/2);
        int m = no * no;

        if (x%2==1){
            m = m *x;
        }
        return m;
    }
}
