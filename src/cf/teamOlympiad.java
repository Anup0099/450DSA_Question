package cf;

import java.util.ArrayList;
import java.util.Scanner;

public class teamOlympiad {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int count[]=new int[4];
        int arr[][] = new int[4][10000];
        int skill;
        for(int i=1; i<=n ;i++) {
            skill=sc.nextInt();
            count[skill]++;
            arr[skill][count[skill]] = i;
        }
        for (int i = 0; i < count.length; i++) {
            System.out.println(count[i]);
        }
        int teams = Math.min(Math.min(count[1], count[2]), count[3]);
        System.out.println(teams);

        for(int i=1;i<=teams;i++)
            System.out.println(arr[1][i]+" "+arr[2][i]+" "+arr[3][i]);


}}
