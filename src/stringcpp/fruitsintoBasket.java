import java.util.HashMap;

class fruitsintoBasket{
    public  static int totalFruits(int []fruits){
       
        int lastFruit = -1;
        int secondlastFruit = -1;
        int currentMax = 0;
        int maxi = 0;
        int last_fruit_count = 0;
        for (Integer nums : fruits)
        {
            if (nums == lastFruit || nums == secondlastFruit)
            {
                currentMax += 1;
            }
            else
            {
                currentMax = last_fruit_count + 1;
            }
            if (nums == lastFruit)
            {
               last_fruit_count += 1;
            }
            else
            {
                last_fruit_count = 1;
            }
            if (nums != lastFruit)
            {
                secondlastFruit = lastFruit;
                lastFruit = nums;
            }
            maxi = Math.max(currentMax, maxi);
        }
        return maxi;

    }
    public static void main(String[] args) {
        int[] fruits = {1,2,1};
        System.out.println(totalFruits(fruits));
    }
}