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
        int arr1[]=new int[m];
        for(int i=0;i<m;i++){
            arr1[i]=sc.nextInt();
        }
        int arr2[]=new int[n];
        for(int i=0;i<n;i++){
            arr2[i]=sc.nextInt();
        }
        ArrayList<Integer>al=new ArrayList<>();
        int count=0;
        for(int i=0;i<Math.min(m,n);i++){
            al.add(arr1[i]);
            al.add(arr2[i]);
            count++;
        }
        for(int i=count;i<Math.max(m,n);i++){
            if(n<=m)
                al.add(arr2[i]);
            else    
                al.add(arr1[i]);
        }
        Collections.sort(al);
        for(int x: al)
        {
            System.out.print(x +" ");
        }
	}
}
