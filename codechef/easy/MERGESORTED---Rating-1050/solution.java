import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int m=sc.nextInt();
		int n=sc.nextInt();
		int marr[]=new int[m];
		for(int i=0;i<m;i++){
		    marr[i]=sc.nextInt();
		}
		int narr[]=new int[n];
		for(int i=0;i<n;i++){
		    narr[i]=sc.nextInt();
		}
        ArrayList<Integer> al=new ArrayList<>();
        int count=0;
        for(int i=0;i<Math.min(m,n);i++)
        {
            al.add(marr[i]);
            al.add(narr[i]);
            count++;
        }
        for(int i=count;i<Math.max(m,n);i++)
        {
            if(m>n)
                al.add(marr[i]);
            else
                al.add(narr[i]);
        }
        Collections.sort(al);
        for(int x : al) {
            System.out.print(x + " ");
        }
	}
}
