import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc=new Scanner(System.in);
        int alicecookies=sc.nextInt();
        int bobcookies=sc.nextInt();
        int cookiesleft=alicecookies-bobcookies;
        if(cookiesleft%2==0)
            System.out.println(cookiesleft/2);
        else    
            System.out.println("-1");
	}
}
