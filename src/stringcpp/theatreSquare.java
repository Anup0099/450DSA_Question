import java.util.Scanner;

class theatreSquare {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
       
            int n = sc.nextInt();
            int m = sc.nextInt();
            int a = sc.nextInt();
            long x = n / a;//6/4=1
            long y = m / a;//6/4=1
            if (n % a != 0) 
            {
                x++;
            }
            if (m % a != 0) {
                y++;
            }
            System.out.println(x * y);
            sc.close();
            
        

    }
    
}