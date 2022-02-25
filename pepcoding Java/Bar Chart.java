import java.io.*;
import java.util.*;
import java.lang.*;

public class Main{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int max = Integer.MIN_VALUE;    
    int[] arr = new int[n];    
    for(int i=0;i<n;i++){
        arr[i]=scn.nextInt();
        max = Math.max(arr[i],max);      
    }
    while(max>0){
    for(int i=0;i<n;i++){
        if(arr[i]>=max){
            System.out.print("*\t");
        }
        else{
            System.out.print("\t");
        }
        
    }
    max--;
    System.out.println();
   }
 }

}
