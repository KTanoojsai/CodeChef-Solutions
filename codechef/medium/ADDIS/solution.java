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
            HashMap<Integer,Integer> hm=new HashMap<>();
            int mFreq=0;
            for(int i=0;i<n;i++)
            {
                int x=sc.nextInt();
                hm.put(x,hm.getOrDefault(x,0)+1);
                mFreq=Math.max(mFreq, hm.get(x));
            }
            System.out.println((mFreq+1)/2);
        }
	}
}
