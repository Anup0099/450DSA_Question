

     
    import java.util.*;
    public class choosingteams
    {
      public static void main (String[]args)
      {
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt (), k = sc.nextInt (), ans = 0;;
        while (n-- > 0)
          {
    	if (sc.nextInt () + k <= 5)
    	  ans++;
          }
        System.out.println (ans / 3);
      }
    }