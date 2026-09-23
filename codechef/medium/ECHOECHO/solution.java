import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        char []a=s.toCharArray();
        int l=1,r=3;
            if(a[l]==a[r] && a[l+1]==a[r+1])
                return new String "Yes";
            else    
                return new String "No";
            
	}
}
