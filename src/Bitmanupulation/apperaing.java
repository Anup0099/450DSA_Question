package Bitmanupulation;

public class apperaing {
    public static void main(String[] args) {
        int [ ]arr={4,4,6,8,8};
        System.out.println(apperaingOnce(arr));
    }
    static int apperaingOnce(int []n){
        int uiniwue =0;
        for (int no:n
             ) {
            uiniwue ^=no;
        }
        return uiniwue;
    }
}
