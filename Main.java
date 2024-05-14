import java.util.*;
        import java.util.Map.Entry;
        import java.io.*;
        
        //************************************************************************************* */
        public class Main{
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
                int[] nextInts(int N) {
                    int[] res = new int[N];
                    for (int i = 0; i < N; i++) {
                        res[i] = (int) nextLong();
                    }
                    return res;
                }
            
                long[] nextLongs(int N) {
                    long[] res = new long[N];
                    for (int i = 0; i < N; i++) {
                        res[i] = nextLong();
                    }
                    return res;
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
        
        
            public static int stoi(String s)  {
                return Integer.parseInt(s);
            }
            //*/
            /**
             * @param args
             * @throws IOException
             */
            
            
            /**
             * @throws IOException
             */
        
        //  ******************************USER DEFINE***********************************************************
        static class pair{
            int f;int s;
            pair(int f,int s){
                this.f=f;
                this.s=s;
            }
        }
        public static int gcd(int a ,int b){
            if(b==0 ) return a;
            return gcd(b,a%b);
        }
        // ___________________________________________________________________________________________
            /**
             * @param args
             * @throws IOException
             */
            public static void main(String[] args) throws IOException {
        
                
                FastReader sc=new FastReader();
                FastWriter out = new FastWriter();
        
        //CODE_FROM_HERE__________________________________
                
        int tc=sc.nextInt();

        
        
        
        while(tc-->0){
            
            int n=sc.nextInt();


            for(int i=0;i<n;i++){
               for(int j=0;j<n;j++){
                if(j%2==i%2) System.out.print("##");
                else System.out.print("..");
            }
            System.out.println();
               for(int j=0;j<n;j++){
                if(j%2==i%2) System.out.print("##");
                else System.out.print("..");
               }
               System.out.println();
            }
        
   



    
   
//kunj

   



    }

   



        

        
    }

        }