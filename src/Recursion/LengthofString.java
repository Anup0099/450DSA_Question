package Recursion;

public class LengthofString {
    public static void main(String[] args) {
        String s = "anuo";

        System.out.println(length(s));
    }
    static  int length(String str){
        if (str.equals("")){
            return  0;

        } else{
            return length(str.substring(1))+1;
        }



    }
}
