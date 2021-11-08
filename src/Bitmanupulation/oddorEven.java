package Bitmanupulation;

public class oddorEven {
    public static void main(String[] args) {
        System.out.println(isEven(45));
    }
    static boolean isEven(int n){
        return ((n & 1) ==1);
    }
}
