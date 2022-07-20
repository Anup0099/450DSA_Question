import java.util.Scanner;

/**
 * permutation
 */
public class permutation {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        String str = scn.next();
        int n = str.length();
        //(string ,left boundary, right boundary)
        findPermutation(str,0,str.length()-1);
    }
    private static void findPermutation(String str,int left,int right){
        if(left==right)System.out.println(str);
        else{
            for(int i=left;i<=right;i++){
                //do recursion
                str = swap(str,left,i);
                //recursion step
                findPermutation(str,left+1,right);
                //undo everything after recursion
                str = swap(str,left,i);
            }
        }
       
    }
    private static String swap(String str,int left,int i){
        char t;
        char []charA=str.toCharArray();
        t=charA[left];
        charA[left]=charA[i];
        charA[i]=t;
        return String.valueOf(charA);

    }

}