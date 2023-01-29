
/**
 * canplantflowerbeds
 */
public class canplantflowerbeds {
    public boolean canFlowers(int[] flowerbed, int n) {
        for (int i = 0; i < flowerbed.length && n > 0; i++) {
            if (flowerbed[i] == 0) {
                int next = (i == flowerbed.length - 1) ? 0 : flowerbed[i + 1];
                int prev= (i==flowerbed.length-1)?0;flowerbed[i-1];
                if(next==0 && prev==0){
                    flowerbed[i]=1;
                    n--;
                }
            }
        }
        if(n>0){
            return false;
        }else{
            return true;
        }

    }

    public static void main(String[] args) {

    }
}