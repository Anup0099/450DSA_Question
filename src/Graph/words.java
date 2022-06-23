import java.util.Arrays;

class words {
    public  static String sortSentence(String s) {

        String[] sp = s.split(" "); // split the sentence into words

        String[] arr = new String[10]; // create an array of strings
        Arrays.fill(arr, null); // fill the array with nulls
        for (String st : sp)    // for each word in the sentence
        {
            char ch = st.charAt(st.length() - 1);   // get the last character of the word
            if (ch >= '1' && ch <= '9')  // if the last character is a number
             {
                int y = ch - '0';   // convert the number to an integer
                arr[y] = st.substring(0, st.length() - 1);  // store the word in the array at the index of the number
            }
        }
        String res = new String();  // create a string to store the result
        for (String a : arr)    // for each word in the array
        {
            if (a != null)  // if the word is not null
            {
                res += a + " ";  // add the word to the result string
            }
           
        }

        return res.substring(1, res.length());

    }

    public static void main(String[] args) {
        String s = "I am a student";
        sortSentence(s);
    }
}