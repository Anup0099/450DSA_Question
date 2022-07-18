/**
 * powerSet2
 */
public class powerSet2 {
static void printPowerSet(String str) { 
    int n=str.length();
    int powSize=(int) Math.pow(2,n);
    for(int i=0;i<powSize;i++) {
        for(int j=0;j<n;j++) {
            if((i&(1<<j))>0) {
                System.out.print(str.charAt(j));
            }
        }
        System.out.println();
    }
}
    public static void main(String[] args) {
        String str="abc";
        printPowerSet(str);
        
    }
}