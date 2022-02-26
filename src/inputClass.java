import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.Date;
import java.util.Scanner;

public class inputClass {
    public static void main(String[] args) throws FileNotFoundException {
        File f = new File("C:\\Users\\Asus\\IdeaProjects\\DSA_Babber\\src\\inputClass.java");
        if(f.exists()){
            System.out.println("The file is already exists");
            System.exit(1);
        }

        PrintWriter p = new PrintWriter(f);
        p.print("FirstName");
        p.print("LastName");
        p.print("Age");
        p.println("Marks");
        p.print("Amit");
        p.print("Singh");
        p.print("19");
        p.println("73");
        p.print("Sumit");
        p.print("Singh");
        p.print("18");
        p.println("75");
        p.print("Rahul");
        p.print("kumar");
        p.print("20");
        p.println("78");
        p.close();


        System.out.println(f.exists());
    }
}
