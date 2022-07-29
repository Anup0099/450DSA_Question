package Binary;

import java.util.Scanner;

public class squareroot {
    public static void bsSquareroot(){
        int n;
        Scanner scn= new Scanner(System.in);
        n=scn.nextInt();
        int low=1,high=n/2;
        int ans=1;
        while(low<=high){
            int mid =(low+high)/2;
            if(mid*mid<=n){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        System.out.println(ans);
    }
    public static void main(String[] args) {
        bsSquareroot();
    }
}
