package Array;

import java.util.Arrays;
import java.util.Scanner;

public class coprime {
    public static int gcd(int a,int b){
        if(a==0)return b;
        return gcd(b%a,a);
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int test=sc.nextInt();
        for (int t=0;t<test;t++){
            int n=sc.nextInt();
            int []arr=new int[n];
            int []hash=new int[1001];
            Arrays.fill(hash,-1);
            for (int i = 0; i <n ; i++) {
                arr[i]= sc.nextInt();
                hash[arr[i]]=i+1;
            }
            int answer=-1;
            for (int i = 0; i <1001; i++) {
                for (int j = i; j <1001 ; j++) {
                    if(hash[i]>=0 && hash[j]>=0 && gcd(i,j)==1){
                        answer=Math.max(answer,hash[i]+hash[j]);
                    }
                }
            }
        }
    }
}
