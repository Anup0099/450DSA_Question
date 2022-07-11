package cf;

import java.util.PriorityQueue;

/**
 * minAmounttoFillcup
 */
public class minAmounttoFillcup {

    public static int fillCups(int[] amount) {
       int ans=0;
        PriorityQueue<Integer> pq = new PriorityQueue<Integer>();
        for(int i=0;i<amount.length;i++)
        {
            pq.add(amount[i]);
        }
        while(pq.peek()!=0){
                int a1=pq.peek();
                pq.remove();
                int a2=pq.peek();
                pq.remove();
                int a3=pq.peek();
                pq.remove();
                if(a2!=0){
                    ans +=1;
                    a1 -=1;
                    a2 -=1;
                    pq.add(a1);pq.add(a2);
                    pq.add(a3);
                }else{
                    ans +=a1;
                    a1 =0;
                    
                    pq.add(a1);
                    pq.add(a2);
                    pq.add(a3);
                }

        }
        return ans;
    }
    public static void main(String[] args) {
        int[] amount = {0,2,2};
        System.out.println(fillCups(amount));
    }
}