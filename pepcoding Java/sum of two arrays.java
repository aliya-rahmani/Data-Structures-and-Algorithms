import java.io.*;
import java.util.*;
import java.lang.*;

public class Main{

public static void main(String[] args) throws Exception {
    
    Scanner scn = new Scanner(System.in);
    int n1 = scn.nextInt();
    int[] a1;
    a1 = new int[n1];
    for(int i=0;i<n1;i++){
        a1[i] = scn.nextInt();
    }
    int n2 = scn.nextInt();
    int[] a2;
    a2 = new int[n2];
    for(int i=0;i<n2;i++){
        a2[i] = scn.nextInt();
    }
    int m = Math.max(n1,n2);
    int[] ans;
    ans = new int[m];
    int i=n1-1,j=n2-1,k=m-1,carry=0;
    while(k>=0){
        if(i>=0 && j>=0){
            ans[k] = a1[i] + a2[j] + carry;
        }
        else if(i>=0) ans[k] = a1[i] + carry;
             else ans[k] = a2[j] + carry;
        carry = ans[k]/10;
        ans[k]%=10;
        i--;
        j--;
        k--;
    }
    for(int i1=0;i1<m;i1++){
        System.out.println(ans[i1]);
    }
 }

}
