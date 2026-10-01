# MNLK09

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in

You are given a string $S$. Your task is to find the length of the longest substring that does not contain any repeating characters.

 **NOTE:**  A substring is a contiguous sequence of characters within a string.

### Input Format
- The first and only line of input contains a single string $S$. The string consists of lowercase English letters, digits and symbols.
### Output Format
- Print a single integer representing the length of the longest substring without repeating characters.
### Constraints
- $1 \leq |S| \leq 10^5$
### Sample 1:
Input
Output

```
pwwkew
```

```
3
```

### Explanation:

The longest substring without repeating characters is "wke", with a length of 3.
Note that "pwke" is a subsequence and not a substring.

### Sample 2:
Input
Output

```
abcabcbb
```

```
3
```

### Explanation:

The longest substring without repeating characters is "abc", which has a length of 3.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T09:49:06.093Z  

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
        String s=sc.nextLine();
        Set<Character> set=new HashSet<>();
        int l=0,m=0;
        for(int r=0;r<s.length();r++)
        {
            while(set.contains(s.charAt(r)))
            {
                set.remove(s.charAt(l));
                l++;
            }
            set.add(s.charAt(r));
            m=Math.max(m,r-l+1);
        }
        System.out.println(m);
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/MNLK09)