# STRNG - Rating 1507

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Strong Elements

Chef has an array $A$ of length $N$.

An index $i$ is called  *strong*  if we can change the gcd of the whole array just by changing the value of $A_i$.

Determine the number of  *strong*  indices in the array.

### Input Format
- First line will contain $T$, number of test cases. Then the test cases follow.
- First line of each test case contains an integer $N$ denoting the size of the array $A$.
- Second line contains $N$ space separated integers $A_1, A_2, \dots, A_N$ - denoting the array $A$.
### Output Format

For each test case, output the number of strong indices in the array.

### Constraints
- $1 \leq T \leq 5 \cdot 10^4$
- $2 \leq N \leq 3 \cdot 10^5$
- $1 \leq A_i \leq 10^9$
- Sum of $N$ over all test cases do not exceed $3 \cdot 10^5$.
### Sample 1:
Input
Output

```
3
3
5 10 20
4
3 5 7 11
4
2 2 2 2

```

```
3
0
4

```

### Explanation:

 **Test Case $1$:**  All the indices are strong.

- For index $1$ you can change the element to $10$ which changes the gcd of the array to $10$.
- For index $2$ you can change the element to $12$ which changes the gcd of the array to $1$.
- For index $3$ you can change the element to $12$ which changes the gcd of the array to $1$.

 **Test Case $2$:**  No index is strong. If you change any single element, `gcd` still remains the same.

 **Test Case $3$:**  All the indices are strong. You can change any element to $3$. This changes the `gcd` of the array to $1$.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-16T17:08:43.712Z  

```java
import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {

    // Function to calculate GCD
    static int gcd(int a, int b) {
        if (b == 0)
            return a;
        else
            return gcd(b, a % b);
    }

    // Main function to solve the problem
    static void mainSolve(BufferedReader br) throws IOException {
        int n = Integer.parseInt(br.readLine());
        int[] v = new int[n];
        int[] pref_gcd = new int[n];
        int[] suff_gcd = new int[n];

        // Reading the input
        String[] input = br.readLine().split(" ");
        for (int i = 0; i < n; i++) {
            v[i] = Integer.parseInt(input[i]);
        }

        int all_gcd = v[0];

        pref_gcd[0] = v[0];
        suff_gcd[n - 1] = v[n - 1];

        // Calculate prefix GCDs
        for (int i = 1; i < n; i++) {
            all_gcd = gcd(all_gcd, v[i]);
            pref_gcd[i] = gcd(pref_gcd[i - 1], v[i]);
        }

        // Calculate suffix GCDs
        for (int i = n - 2; i >= 0; i--) {
            suff_gcd[i] = gcd(suff_gcd[i + 1], v[i]);
        }

        int ans = 0;

        // Calculate the result
        for (int i = 0; i < n; i++) {
            int curr_gcd;
            if (i == 0) {
                curr_gcd = suff_gcd[i + 1];
            } else if (i == n - 1) {
                curr_gcd = pref_gcd[i - 1];
            } else {
                curr_gcd = gcd(pref_gcd[i - 1], suff_gcd[i + 1]);
            }

            if (curr_gcd != 1) {
                ++ans;
            }
        }

        System.out.println(ans);
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine());

        // Process each test case
        while (t-- > 0) {
            mainSolve(br);
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/STRNG)