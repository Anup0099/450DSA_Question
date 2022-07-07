package cf;
//cheap travel
import java.util.Arrays;
import java.util.HashSet;
import java.util.Scanner;

public class ANtonandLetters {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt(),m=sc.nextInt(),a=sc.nextInt(),b=sc.nextInt();
        if(m*a<=b){
            System.out.println(n*a);
        }else{
            System.out.println((n/m)*b+Math.min((n%m)*a,b));
        }
    }
}
