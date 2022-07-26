
public class printNlexicographically {
    public static void lexico(int x, int n) {
        // f(x,n) print from x->n in lexico order
        // self work
        if (x != 0) {
            System.out.println(x);
        }
        if(x==n){
            System.out.println(x);
            return;
        }
        if (x > n) {
           
            return;
        }
        //recursive task
        for (int i = (x == 0) ? 1 : 0; i <= 9; i++) {
            lexico(x * 10 + i, n);
        }

    }

    public static void main(String[] args) {
        lexico(0, 100);

    }
}
