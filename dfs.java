import java.util.*;
 
public class Main{
    
    static class pair{
        int f,s;
        pair(int f, int s){
            this.f=f;
            this.s=s;
        }
    }
    
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);


int tc=sc.nextInt();

while(tc-->0){

        int n = sc.nextInt();

     HashMap<Long,Integer> hm =new HashMap<>();    
    int grpp=0;
    int l=n;
       while(n-->0){
        Long x=sc.nextLong();
      
        Long pos=0l;
        
        Long d=1l;
        Long num=x;
        int t=31;
        while(t-->0){
            
         if(((num)&1)==0) pos+=d;
         num=num>>1;
         d*=2;
        }
        // System.out.println(pos);
        if(hm.containsKey(pos)) 
        {
            grp++;
            hm.put(pos,hm.get(pos)-1);
            if(hm.get(pos)==0) hm.remove(pos);
        }
       else  hm.put(x,hm.getOrDefault(x,0)+1);
 
       }
       System.out.println(l-grpp);

      
}
}
}