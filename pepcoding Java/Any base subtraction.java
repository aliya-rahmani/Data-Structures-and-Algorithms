import java.util.*;
import java.lang.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int b = scn.nextInt();
      int n1 = scn.nextInt();
      int n2 = scn.nextInt();
  
      int d = getDifference(b, n1, n2);
      System.out.println(d);
   }
  
   public static int getDifference(int b, int n1, int n2){
       // write your code here
       int carry=0,ans=0,dig=0;
       while(n2>0){
           int d2 = n2%10;
           int d1 = n1%10;
           int d=0;
           d2 = d2+carry;
           if(d2<d1){
               d = (d2-d1 +b);            
               carry =-1;               
               
           }
           else{
               carry=0;
               d =d2 -d1;
           }
           ans+=d*Math.pow(10,dig);
           dig++;
           n2/=10;
           n1/=10;
       }
       return ans;

   }
  
  }
