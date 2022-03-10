package Array;

public class reversearray {
    public static void reverseString(char[] s) {
        helper(0,s);
    }

    private static void helper(int i,
                               char[] s) {
        int n =s.length;

        if(i==n/2){
            return;
        }
        swap(s,i,n-i-1);
        helper(i+1,s);
    }
    static void swap(char []arr, int i, int j)
    {
        char temp= arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    public static void main(String[] args) {
      char [] s = {'H','a'};
        reverseString(s);
    }
}
