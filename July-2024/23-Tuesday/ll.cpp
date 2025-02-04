import java.util.*;
    import java.util.Map.Entry;
    import java.util.concurrent.ArrayBlockingQueue;
    import java.io.*;
    import java.lang.reflect.Array;

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
    static class triplet{
        int f;int s, t;
        triplet(int f,int s,int t){
            this.f=f;
            this.s=s;
            this.t=t;
        }
    }

    public static int gcd(int a ,int b){
        if(b==0 ) return a;
        return gcd(b,a%b);
    }


    public static ArrayList<Long> PrimeFactors(long n){
        ArrayList<Long> ans= new ArrayList<>();
    for(long i=2;i*1l*i<=n;i++){
        while(n%i==0){
            n/=i;
            ans.add(i);
        }
    }
    if(n>1) ans.add(n);
    return ans;
    }

    // static int[] prime = new int[1000009];

    // static void seive(int n){
    //     Arrays.fill(prime,-1);
    //     prime[1]=1;
    //     for(int p=2;p<=n;p++){
    //         if(prime[p]==-1){
    //             for(int i=p;i<=n;i+=p){
    //                 if(prime[i]==-1){
    //                     prime[i]=p;
    //                 }
    //             }
    //         }
    //     }
    // }

    // ___________________________________________________________________________________________
        /**
         * @param args
         * @throws IOException
         */

    static double dist(int a,int b,int c,int d){
        return Math.sqrt((a-c)(a-c)+(b-d)(b-d));
    }

     static  boolean isPrime(long n ){
        if(n<=1) return false;
        if(n<=3) return true;

        for(long i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
       }


       public static boolean isPerfectSquare(Long n) {
        if (n < 0) {
            return false;
        }
        long sqrt = (long) Math.sqrt(n);
        return sqrt * sqrt == n;
    }


    static long ff(long n){

        for(long i=2;(i*1l*i)<=n;i++){
            if(n%i==0) return i;
        }

        return n;
    }


    public static void main(String[] args) throws IOException {

            
            FastReader sc=new FastReader();
            FastWriter out = new FastWriter();

    //CODE_FROM_HERE__________________________________
    // Scanner sc = new Scanner (System.in);
            
    int tc=sc.nextInt();

    // long t = 100000000;
    // long m[] = new long[(int)t];

    // for(int i=0;i<100000000;i++) m[i] = i;


    // for(int i=2;i*i<=t;i++){
    //  if(m[i]!=i){
    //     for(long j=i;j*j<=t;j+=i){
    //         m[(int)j] = i;
    //     }
    //  }
        
    // }

    // seive(1000005);



    while(tc-->0){

 
        int n = sc.nextInt();
       
    long k = sc.nextLong();
    long sum = 0;

    long a[] = new long[n];

    for(int i=0;i<n;i++) a[i] = sc.nextInt();

    Arrays.sort(a);

int l = 0;
int r = 0;
long t = 0;

long prev = a[0];

while(r<n){
    t+=a[r];
    while(t>k&&l<=r||(a[r]-prev>1)&&l<=r){
       t-=a[l];
       l++;
      if(l<n) prev = a[l];
    }

    // prev = a[r];

  if(prev-a[r]<=1)  sum = Math.max(t,sum);
    r++;
}

System.out.println(sum);
   
    





}        
}
    
    }