# GCDDIV - Rating 1829

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

### The hardest gcd problem

You are given a sequence $A_1, A_2, \dots, A_N$ of positive integers and an integer $K$. You are allowed to perform the following operation any number of times (including zero):

- choose an index $j$ between $1$ and $N$ inclusive
- choose a positive divisor $d$ of $A_j$ such that $d \le K$
- divide $A_j$ by $d$

Determine if it is possible to modify the sequence $A$ in such a way that it would satisfy the following condition: there is no positive integer strictly greater than $1$ which divides every element of $A$. (In other words, the greatest common divisor of all elements of $A$ should be $1$.)

### Input
- The first line of the input contains a single integer $T$ denoting the number of test cases. The description of $T$ test cases follows.
- The first line of each test case contains two space-separated integers $N$ and $K$.
- The second line contains $N$ space-separated integers $A_1, A_2, \dots, A_N$.
### Output

For each test case, print a single line containing the string `"YES"` if it is possible to make the GCD of all elements of $A$ equal to $1$ or `"NO"` if it is impossible.

### Constraints
- $1 \le T \le 10$
- $1 \le N \le 10^5$
- $1 \le A_i \le 10^9$ for each valid $i$
- $1 \le K \le 10^9$
### Subtasks

 **Subtask #1 (30 points):** 

- $1 \le N, K \le 100$
- $1 \le A_i \le 100$ for each valid $i$

 **Subtask #2 (70 points):**  original constraints

### Sample 1:
Input
Output

```
2
3 6
10 15 30
3 4
5 10 20
```

```
YES
NO
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-16T17:07:40.132Z  

```java
import java.util.*;
class Codechef {
    static long gcd(long a, long b) 
    {
        while (b != 0) 
        {
            long temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }
    public static void main(String[] args) throws Exception 
    {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0)
        {
            int N = sc.nextInt();
            long K = sc.nextLong();
            long g = 0;
            for (int i = 0; i < N; i++) 
            {
                long x = sc.nextLong();
                g = gcd(g, x);
            }
            boolean possible = true;
            for (long i = 2; i * i <= g; i++)
            {
                if (g % i == 0) 
                {
                    if (i > K)
                    {
                        possible = false;
                        break;
                    }
                    while (g % i == 0)
                        g /= i;
                }
            }
            if (g > 1 && g > K)    possible = false;
            System.out.println(possible ? "YES" : "NO");
        }
        sc.close();
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/GCDDIV)