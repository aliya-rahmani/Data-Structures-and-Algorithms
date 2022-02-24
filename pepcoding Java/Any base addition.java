import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int b = scn.nextInt();
      int n1 = scn.nextInt();
      int n2 = scn.nextInt();
  
      int d = getSum(b, n1, n2);
      System.out.println(d);
   }
  
   public static int getSum(int b, int n1, int n2){
       // write ur code here
       int sum=0,carry=0,dig=0;
       while(n1>0 || n2>0 || carry>0){
           int ans = n1%10 + n2%10 + carry;
           carry = ans/b;          
           sum+=ans%b * Math.pow(10,dig);
           dig++;
           n1/=10;
           n2/=10;

       }
       return sum;
   }
  }
