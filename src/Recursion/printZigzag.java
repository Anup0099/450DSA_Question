package Recursion;

public class printZigzag {
    public static void main(String[] args) {

    }
    static void zig(int n){
        if (n==0){
            return;
        }
        System.out.println("pre"+n);
        zig(n-1);
        System.out.println("in"+n);
        zig(n-1);
        System.out.println("post"+n);
    }
}
