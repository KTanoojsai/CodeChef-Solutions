import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        long a=0;
        long b=1;
        if(n==1)
        {
            System.out.println(a);
            return;
        }
        for(int i=1;i<n;i++)
        {
            long c=a+b;
            a=b;
            b=c;
        }
        System.out.println(a);
	}
}
