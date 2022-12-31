class Solution {
    public int nthUglyNumber(int n) {
         int []ugly=new int[n];
        ugly[0]=1;
        int index1=0,index3=0,index5=0;
        int factor1=2,factor3=3,factor5=5;
        for (int i = 1; i <n ; i++) {
            int min=Math.min(Math.min(factor1,factor3),factor5);
            ugly[i]=min;
            if (factor1==min){
                factor1 =2*ugly[++index1];
            }
            if (factor3==min){
                factor3 =3*ugly[++index3];
            }
            if (factor5==min){
                factor5 =5*ugly[++index5];
            }
        }
        return ugly[n-1];
    }
}