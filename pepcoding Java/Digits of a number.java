import java.util.*;
import java.lang.Math;

public class Main
{
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		int n = scn.nextInt();
		int num =n;
		int count=0;
		while(n>0){
		    int d = n%10;
		    n/=10;
		    count++;
		}
		while(count>0){
		    int t= (int)Math.pow(10,count-1);
		    System.out.println(num/t);
		    num%=t;
		    count--;
	}

 
	}	
}
