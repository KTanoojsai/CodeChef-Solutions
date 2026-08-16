import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
		    int n=sc.nextInt();
		    int[] arr=new int[n];
		    for(int i=0;i<n;i++)arr[i]=sc.nextInt();
		    if(n==1){
		        System.out.println(0);
		        continue;
		    }
		    int min=Integer.MAX_VALUE;
		    for(int num:arr)min=Math.min(min,num);
		    boolean flag=true;
		    int count=0;
		    for(int i=0;i<n;i++){
		        if(arr[i]%min!=0){
		            flag=false;
		            break;
		        }
		        if(arr[i]==min)count++;
		    }
		    if(flag)System.out.println(n-count);
		    else System.out.println(n);
		}
	}
}