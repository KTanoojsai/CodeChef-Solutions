import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int k=sc.nextInt();
            int val=Math.min(n,k)+1;
            if(val==Math.Max(n.k))
                System.out.println("Yes");
            else
                System.out.println("No");
        }
	}
}
