import java.util.*;
import java.lang.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int n = scn.nextInt();
      int sourceBase = scn.nextInt();
     int  destBase= scn.nextInt();
     int ans= anybasetoDecimal(n,sourceBase);
     ans = DecimaltoanyBase(ans,destBase);
      System.out.println(ans);
   }   

   public static int anybasetoDecimal(int n, int b){
      // write your code here
      int ans=0,rem,count=0;
      while(n>0){
         rem = n%10;
         n/=10;
         ans+=rem*(Math.pow(b,count));
         count++;
      }
      return ans;
   }
   public static int DecimaltoanyBase(int n, int b){
       // write code here
       int count=0,rem,ans=0;
       while(n>0){
           rem = n%b;
           n/=b;
           ans += rem*(Math.pow(10,count));
           count++;
       }
       return ans;
   }
  }
