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

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0){
            int n=sc.nextInt();
            int []arr=new int[n];
            for (int i = 0; i <n ; i++) {
                arr[i]=sc.nextInt();
            }


        }

    }
}
