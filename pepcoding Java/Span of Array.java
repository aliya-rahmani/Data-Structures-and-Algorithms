import java.io.*;
import java.util.*;
import java.lang.*;

public class Main{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner scn = new Scanner(System.in);
    int n,max=Integer.MIN_VALUE,min=Integer.MAX_VALUE;
    n = scn.nextInt();
    int[] arr;
    arr = new int[n];

    
    for(int i=0;i<n;i++){
        arr[i]=scn.nextInt();
        max = Math.max(max,arr[i]);
        min = Math.min(min,arr[i]);
    }
    System.out.println(max-min);

 }

}
