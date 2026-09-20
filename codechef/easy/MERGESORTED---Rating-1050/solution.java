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
		ArrayList<Integer> al = new ArrayList<>();
        int i = 0;
        int j = 0;
        while (i < m && j < n) {
            if (marr[i] <= narr[j]) {
                al.add(marr[i]);
                i++;
            } else {
                al.add(narr[j]);
                j++;
            }
        }
        while (i < m) {
            al.add(marr[i]);
            i++;
        }
        while (j < n) {
            al.add(narr[j]);
            j++;
        }
        for(int x : al) {
            System.out.print(x + " ");
        }
	}
}
