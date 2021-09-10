package string;

public class ExcelColumn {
    public static void main(String[] args) {
        String s ="ASD";
        int vf = column(s);
        System.out.println(vf);

    }
    static int column(String s){
        int result = 0;
        for (char c : s.toCharArray()){
            int d = c - 'A' +1;
            result = result*26 +d ;

        }
        return result;
    }
}
