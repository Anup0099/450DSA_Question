package Recursion;

public class functin {
    static boolean f(int i,String s){
        if (i>=s.length()/2)return true;
        int n = s.length();
        if (s.charAt(i) != s.charAt(n-i-1)){
            return false;
        }
       return f(i+1,s);
    }
    public static void main(String[] args) {
        System.out.println(f(0,"MADAM"));
    }
}
