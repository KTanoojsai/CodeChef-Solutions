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
        ArrayList <Integer>al=new ArrayList<>();
        int i=0,j=0;
        while(i<m && j<n){
            if(arr1[i]<=arr2[j])
            {
                al.add(arr1[i]);
                
                i++;
            }
            else
            {
                al.add(arr2[j]);
                j++;
            }
        }
        while(i<m){
            al.add(arr1[i]);
            i++;
        }
        while(j<n)
        {
            al.add(arr2[j]);
            j++;
        }
        for(int x:al){
            System.out.print(x+" ");
        }
	}
}
