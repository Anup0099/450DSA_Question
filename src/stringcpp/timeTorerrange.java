package stringcpp;

/**
 * timeTorerrange
 */
public class timeTorerrange {
    public int secondsToRemoveOccurrences(String s) {
        int t=0;
        int n=s.length();
        if(n==1)return 0;
        while(s.indexOf("01")>=0){
          
            s=s.replace("01","10");
            t++;
        }
        return t;
    }

    public static void main(String[] args) {

    }
}