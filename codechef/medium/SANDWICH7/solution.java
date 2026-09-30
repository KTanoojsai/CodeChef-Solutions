import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc=new Scanner(System.in);
        int b=sc.nextInt();
        int h=sc.nextInt();
        int c=sc.nextInt();
        if(b%2==0)
            System.out.println(b-(h+c));
	    else
	        System.out.println(b-(h+c)-1);
	    
	}
}
