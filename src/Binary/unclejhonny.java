

/**
 * unclejhonny
 */
// 1342 2 output 3
import java.util.Scanner;

public class unclejhonny {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        while (n-- > 0){
           int N=scn.nextInt();
           int arr[]=new int[N+1];
              for(int i=1;i<=N;i++){
                arr[i]=scn.nextInt();
              }

            int song = scn.nextInt();
            int ans=0;
            for(int i=1;i<=N;i++){
                ans = arr[song];
            }
            System.out.println(ans);

        }
    }
}