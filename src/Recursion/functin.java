package Recursion;

public class functin {
    static boolean f(int i,String s){
        if (i>=s.length()/2)return true;
        int n = s.length();
        if (s.charAt(i) != s.charAt(n-i-1)){
            return false;
        }
       return f(i+1,s);
    }
    public static int minEating(int []piles,int h){
        int max=Integer.MIN_VALUE;
        for (int val:piles
             ) {
            max = Math.max(val,max);

        }
        if (h==piles.length){
            return max;
        }
        int lo =0;
        int high =max;
        int speed=Integer.MAX_VALUE;
        while (lo<=high){
            int sp =lo+ (high-lo)/2;
            if (isPossible(piles,sp,h)==true){
                speed=sp;
                high= sp-1;
            }else {
                lo=sp+1;
            }

        }
        return speed;
    }

    private static boolean isPossible(int[] piles,
                                   int sp,
                                   int h) {
        int time =0;
        for (int i = 0; i < piles.length; i++) {
            time += (int) Math.ceil(piles[i]*1.0/sp);
        }
        return time<=h;
    }
    public static double distance(double lat1,
                                  double lat2, double lon1,
                                  double lon2)
    {
        lon1 = Math.toRadians(lon1);
        lon2 = Math.toRadians(lon2);
        lat1 = Math.toRadians(lat1);
        lat2 = Math.toRadians(lat2);


        double dlon = lon2 - lon1;
        double dlat = lat2 - lat1;
        double a = Math.pow(Math.sin(dlat / 2), 2)
                + Math.cos(lat1) * Math.cos(lat2)
                * Math.pow(Math.sin(dlon / 2),2);

        double c = 2 * Math.asin(Math.sqrt(a));
        double r = 6371;

        // calculate the result
        return(c * r);
    }

    public static void main(String[] args) {

    }
}
