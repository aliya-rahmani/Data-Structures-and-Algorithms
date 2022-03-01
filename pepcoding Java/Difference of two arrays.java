import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    // write your code here
    int n1;
    Scanner scn = new Scanner(System.in);
    n1 = scn.nextInt();
    int[] a1;
    a1 = new int[n1];
    for(int i=0;i<n1;i++){
        a1[i] = scn.nextInt();
    }
    int n2;
    n2 = scn.nextInt();
    int[] a2;
    a2 = new int[n2];
    for(int i=0;i<n2;i++){
        a2[i] = scn.nextInt();
    }
    int[] ans;
    ans = new int[n2];
    int j=n2-1, i=n1-1, k=n2-1,carry=0;
    while(k>=0 ){
        int av1 = i>=0 ? a1[i] : 0;
        if(av1>a2[j]+carry){
            
            ans[k] = a2[j] - av1 + 10 +carry;
            carry=-1;
        }
        else{
            ans[k] = a2[j]-av1+carry;
            carry=0;
        }
        
        i--;
        j--;
        k--;
    }
    int i1=0;
    while(i1<n2){
        if(ans[i1]!=0) break;
        i1++;
    }
    while(i1<ans.length){
        System.out.println(ans[i1]);
        i1++;
    }

 }

}
