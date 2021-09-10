package string;

public class StringIpAddress {
    public static void main(String[] args) {
        String address = "1.1.1.1";
        System.out.println(defangIPaddr(address));
    }
    static String defangIPaddr(String address) {
        return address.replace(".", "[.]");
    }
}
