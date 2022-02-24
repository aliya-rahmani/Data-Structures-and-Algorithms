import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    Scanner scn = new Scanner(System.in);
    int n;
    n = scn.nextInt();
    
    int[] arr;
    arr = new int[n];

    
    for(int i=0;i<n;i++){
        arr[i]=scn.nextInt();        
    }

    int d = scn.nextInt();
    int ans=0,count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==d) {
            count=1;
            ans = i;
            }
    }
    if(count==1) System.out.println(ans);
    else System.out.println(-1);
 }

}
