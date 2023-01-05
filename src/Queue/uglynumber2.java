package Queue;

public class uglynumber2 {
    public static int prime(int n){
        int count=0;
        while(n%2==0){
            count++;
            n=n/2;
        }
        while(n%3==0){
            count++;
            n=n/3;
        }
        while(n%5==0){
            count++;
            n=n/5;
        }
        return count;
    }
    public static int uglyNumber(int n){
      int []dp=new int[n];
      dp[0]=1;
        int i2=0,i3=0,i5=0;
        for (int i = 1; i <n ; i++) {
            int two=dp[i2]*2;//1*2=2
            int three=dp[i3]*3;//1*3=3
            //1*5=5
            int five=dp[i5]*5;
            dp[i]=Math.min(two,Math.min(three,five));
            if(dp[i]==two){
                i2++;
            }
            if(dp[i]==three){
                i3++;
            }
            if(dp[i]==five){
                i5++;
            }
        }
        return dp[n-1];

    }
    public static void main(String[] args) {
        System.out.println(uglyNumber(10));
    }
}
