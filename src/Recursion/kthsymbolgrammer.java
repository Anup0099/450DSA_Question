package Recursion;

class kthsymbolgrammer {
    public static void main(String[] args) {
        System.out.println(kthGrammar(2,1));
    }
    public static int kthGrammar(int n, int k) {
        int mid = (int) (Math.pow(2.0,n-1)/2);

        if (n==1 && k==1){
            return  0;
        }
        if (k<=mid){
          return   kthGrammar(n-1,k);
        }else{
          int t=  kthGrammar(n-1,k-mid);
          return  t^1;
        }
    }
}