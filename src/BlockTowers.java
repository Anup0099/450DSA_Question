import java.util.Arrays;
import java.util.Scanner;

public class BlockTowers {
//    There are n block towers, numbered from 1 to n. The i-th tower consists of ai blocks.
//
//    In one move, you can move one block from tower i to tower j, but only if ai>aj. That move increases aj by 1 and decreases ai by 1. You can perform as many moves as you would like (possibly, zero).
//
//    What's the largest amount of blocks you can have on the tower 1 after the moves?
//
//    Input
//    The first line contains a single integer t (1≤t≤104) — the number of testcases.
//
//    The first line of each testcase contains a single integer n (2≤n≤2⋅105) — the number of towers.
//
//    The second line contains n integers a1,a2,…,an (1≤ai≤109) — the number of blocks on each tower.
//
//    The sum of n over all testcases doesn't exceed 2⋅105.
//
//    Output
//    For each testcase, print the largest amount of blocks you can have on the tower 1 after you make any number of moves (possibly, zero).
    public static void main(String[] args) {

        Scanner s=new Scanner(System.in);

        int n=s.nextInt();
        int m=s.nextInt();

        int ar[]=new int[n];
        int br[]=new int[m];

        for(int i=0;i<n;i++)
            ar[i]=s.nextInt();
        for(int i=0;i<m;i++)
            br[i]=s.nextInt();

        Arrays.sort(ar);
        Arrays.sort(br);

        int tmin=Integer.max(ar[0]*2,ar[n-1]);

        if(br[0]<=tmin)
            System.out.println(-1);
        else
            System.out.println(tmin);

        s.close();


        }

    }

