package Hashing;


    import java.io.*;
    import java.util.*;

    public class pairarray {
        static class FastReader{
            BufferedReader br;
            StringTokenizer st;
            public FastReader(){
                br=new BufferedReader(new InputStreamReader(System.in));
            }
            String next(){
                while(st==null || !st.hasMoreTokens()){
                    try {
                        st=new StringTokenizer(br.readLine());
                    } catch (IOException e) {
                        e.printStackTrace();
                    }
                }
                return st.nextToken();
            }
            int nextInt(){
                return Integer.parseInt(next());
            }
            long nextLong(){
                return Long.parseLong(next());
            }
            double nextDouble(){
                return Double.parseDouble(next());
            }
            String nextLine(){
                String str="";
                try {
                    str=br.readLine().trim();
                } catch (Exception e) {
                    e.printStackTrace();
                }
                return str;
            }
        }
        static class FastWriter {
            private final BufferedWriter bw;

            public FastWriter() {
                this.bw = new BufferedWriter(new OutputStreamWriter(System.out));
            }

            public void print(Object object) throws IOException {
                bw.append("" + object);
            }

            public void println(Object object) throws IOException {
                print(object);
                bw.append("\n");
            }

            public void close() throws IOException {
                bw.close();
            }
        }
        public static void solution(int[] arr, int k){
            //write your code here


        }

        public static void main(String[] args) {

            try {
                FastReader in=new FastReader();
                FastWriter out = new FastWriter();
                int testCases=in.nextInt();
                while(testCases-- > 0){
                int x = in.nextInt(),y= in.nextInt(),a=in.nextInt(),b=
                        in.nextInt(),k= in.nextInt();
                if( (x+a)>(y+b)){

                    out.println("DIESEL");
                    }else if ((x+a)<(y+b)){
                    out.println("PETROL");
                }else{
                    out.println("SAME PRICE");
                }

                    // write code here
                }
                out.close();
            } catch (Exception e) {
                return;
            }

        }
        public static boolean canpalce(int[]flowerbed,int n){
            int count =0;
            for (int i = 0; i < flowerbed.length ; i++) {
                if (flowerbed[i]==0){
                    int prev=(i==0 || flowerbed[i-1]==0)?0:1;
                    int next =(i==flowerbed.length-1 || flowerbed[i+1]==0)?0:1;

                    if (prev ==0 && next==0){
                        flowerbed[i]=1;
                        count++;
                    }
                }
            }
            return count>=n;
        }

    }


