# DIVIDEMAKEEQ - Rating 1185

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Luigi and Uniformity

Luigi has an array $A$ of $N$ positive integers. He wants to make all elements of the array  **equal**.

In one move, he can:

- Choose an index $i$ $(1\le i \le N)$ and divide the element $A_i$ by any one of its divisors. In other words, he can choose a positive integer $X$ such that $X | A_i$ and set $A_i := \frac{A_i}{X}$.

Find the  **minimum**  number of moves required to make all the elements of the array  **equal**.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains $N$, the size of array $A$. The second line of each test case contains $N$ space-separated integers, the elements of array $A$.
### Output Format

For each test case, output on a new line, the  **minimum**  number of moves required to make all elements of the array equal.

### Constraints
- $1 \leq T \leq 1000$
- $1 \leq N \leq 3000$
- $1 \leq A_i \leq 10^9$
### Sample 1:
Input
Output

```
4
2
11 22
5
38 38 38 38 38
4
4 4 16 8
4
11 13 17 19

```

```
1
0
2
4

```

### Explanation:

 **Test case $1$:**  We can change $22$ to $11$ using an operation (divide by $2$). Thus, using one operation, we made all the elements equal.

 **Test case $2$:**  All numbers are already same. Thus, we do not need to do any operations.

 **Test case $3$:**  We make the following operations:

- Choose $i = 3$ and $X = 4$, such that $4|16$. Thus, $A_3 := \frac{16}{4} = 4$.
- Choose $i = 4$ and $X = 2$, such that $2|8$. Thus, $A_4 := \frac{8}{2} = 4$.

Thus, using two operations, we made all the elements equal.

 **Test case $4$:**  We make the following operations:

- Choose $i = 1$ and $X = 11$, such that $11|11$. Thus, $A_1 := \frac{11}{11} = 1$.
- Choose $i = 2$ and $X = 13$, such that $13|13$. Thus, $A_2 := \frac{13}{13} = 1$.
- Choose $i = 3$ and $X = 17$, such that $17|17$. Thus, $A_3 := \frac{17}{17} = 1$.
- Choose $i = 4$ and $X = 19$, such that $19|19$. Thus, $A_4 := \frac{19}{19} = 1$.

Thus, using four operations, we made all the elements equal.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-16T17:03:13.789Z  

```java
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
```

---

[View on CodeChef](https://www.codechef.com/problems/DIVIDEMAKEEQ)