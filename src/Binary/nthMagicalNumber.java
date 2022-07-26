package Binary;

public class nthMagicalNumber {
    public static int nthMagicalNumber(int n, int a, int b) {
        int ans=0;int i=1;int number=2;
        while(i<=n){
            if(number%a==0 && number%b==0){
                 if (i==n){
                    ans=number;
                    break;
                }
                i++;
            }
            number++;
        }
        ans=number;
        return ans;
    }
    public static void main(String[] args) {
        System.out.println(nthMagicalNumber(4, 2, 3));
    }
}
