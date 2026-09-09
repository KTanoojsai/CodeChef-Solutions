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
        while(t-->0)
        {
            int l=sc.nextInt();
            String s=sc.next();
            String s1=sc.next();
            int acount=0;
            int bcount=0;
            for(int i=0;i<s.length();i++)
            {
                if(s.charAt[i]=='a')
                    acount++;
                if(s1.charAt[i]=='a')
                    bcount++;
            }
            if(acount+bcount==l)
                System.out.println("Yes");
            else
                System.out.println("No");
        }
	}
}
