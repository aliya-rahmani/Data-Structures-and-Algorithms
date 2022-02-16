import java.util.*;


public class Main
{
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		int n = scn.nextInt();
		int num =n;
		int count=0;
		while(n>0){
		    int d = n%10;
		    System.out.print(d);
		    n/=10;
		    count++;
		}		    

 
	}	
}
