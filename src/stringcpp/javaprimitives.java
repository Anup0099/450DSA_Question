

/**
 * javaprimitives
 */
public class javaprimitives {

    public static void main(String[] args) {
        // int char double byte short long float boolean are all the primitives type
        // Character Byte Short Integer Short Double Float are all are all the wrapper
        // class
        // primitives types for efficiency
        // int x1 = 10;
        // Integer x2 = x1;
        // int x3 = x2;
        // //autoboxing auto -unboxing
        // System.out.println(x1);
        // System.out.println(x2);
        // System.out.println(x3);
        // Integer s1=100,s3=100;
        // int s2=100;
        // if(s1==s3){
        //     System.out.println("same");
        // }else{
        //     System.out.println("not same");
        // }
        //narrowing explicit conversion
        int x=100;
        long y=x;
        float z=y;
        //byte->short->int->long->float->double
        double d=65.4;
        int i=(int)d;
        char c= (char)i;
        System.out.println(i);
        System.out.println(c);

         

    }
}