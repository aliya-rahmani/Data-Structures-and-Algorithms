// { Driver Code Starts
//Initial Template for Java


/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;
class GFG {
	public static void main (String[] args) {
	    
	    //taking input using Scanner class
		Scanner sc=new Scanner(System.in);
		
		//taking total count of testcases
		int t=sc.nextInt();
		
		while(t-->0)
		{
		    //taking total number of elements
		    int n=sc.nextInt();
		    
		    //calling printFibb() method
		    long[] res = new Solution().printFibb(n);
		    
		    //printing the elements of the array
		    for (int i = 0; i < res.length; i++)
		        System.out.print (res[i]+" ");
		    System.out.println();
		}
	}
}// } Driver Code Ends


//User function Template for Java


class Solution
{
    //Function to return list containing first n fibonacci numbers.
    private static long[] getFibb(int n, long[] ans, long a,long b,int i){
        if(n==0) return ans;
        ans[i]=b;
        return getFibb(n-1,ans,b,a+b,i+1);
    }
    public static long[] printFibb(int n) 
    {
        //Your code here
        long[] dp;
        dp = new long[n];
        long b=1,a=0;
        int i=0;
        dp = getFibb(n,dp,a,b,i);
        return dp;
    }
}
