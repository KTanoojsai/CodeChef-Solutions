# MERGESORTED - Rating 1050

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Merge two sorted arrays

You are given two sorted arrays $A$ and $B$ of size $N$ and $M$ respectively. You need to merge these two arrays and keep the final array sorted.

### Input Format
- The first line contains two integers $N$ and $M$ — the size of array $A$ and $B$
- The second line contains all the elements of array $A$
- The third line contains all the elements of array $B$
### Output Format

Output the merged array elements on a single line.

### Constraints
- $1 \leq N, M \leq 10^5$
- $1 \leq A_i, B_i \leq 10^5$
### Sample 1:
Input
Output

```
5 4
1 4 8 9 10
2 3 5 6
```

```
1 2 3 4 5 6 8 9 10
```

### Sample 2:
Input
Output

```
1 2
10
1 2
```

```
1 2 10
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-19T18:11:45.819Z  

```java
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

```

---

[View on CodeChef](https://www.codechef.com/problems/MERGESORTED)