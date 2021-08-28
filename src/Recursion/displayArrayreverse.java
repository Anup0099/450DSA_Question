package Recursion;

public class displayArrayreverse {
    public static void main(String[] args) {

    }
    static void display(int[] array,int idx){
        if (idx==array.length){
            return;
        }
        display(array,idx+1);
        System.out.println(array[idx]);
    }
}
