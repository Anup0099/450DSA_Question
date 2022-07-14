package cf;

import java.util.Scanner;

public class devutheSinger {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt(),m=sc.nextInt();
        int[] a=new int[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {a[i]=sc.nextInt();
        sum=sum+a[i];
        }
//        System.out.println(sum);
        int devutime=(n-1)* 10;//gap between two songs
//        System.out.println(devutime);
        int remtime = m-(devutime+sum);//remaining time
//        System.out.println(remtime);

        int cherutime = (remtime+devutime)/5;
//        System.out.println(cherutime);
        if((devutime+sum)>m){
            System.out.println(-1);
        }else{
            System.out.println(cherutime);
        }
    }
}
