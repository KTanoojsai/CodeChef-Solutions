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
            int n=sc.nextInt();
            String s=sc.next();
            char []a=s.toCharArray();
            for(int i=0;i<n-1;i+=2)
            {
                char temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
            for (int i = 0; i < n; i++) {
                a[i] = (char) ('z' - (a[i] - 'a'));
            }
            System.out.println(new String(a));
        }
        sc.close();
	}
}
