import java.util.*;
import java.lang.*;

public class Main{

public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int b = scn.nextInt();
    int n1 = scn.nextInt();
    int n2 = scn.nextInt();

    int d = getProduct(b, n1, n2);
    System.out.println(d);
 }

 public static int getProduct(int b, int n1, int n2){
     // write your code here
     int prod=0,dig=0;
     while(n2>0){ 
        int d2=n2%10;    
        n2/=10;
        int ans1;
        ans1= getProductSingle(b,n1,d2) * (int)Math.pow(10,dig);
        prod  = getSum(b,ans1,prod);
        dig++;
     }
     return prod;
 }
  public static int getProductSingle(int b, int n1, int d2){
     // write your code here
     int carry=0,prod=0,sum=0;
     int dig=0;
     while(n1>0 || carry>0){
         int d1=n1%10;
         n1/=10;
         int d = d1*d2+ carry;         
         carry = d/b;
         d = d%b;
         sum += d* Math.pow(10,dig);
         dig++;
      }
      return sum;      
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
