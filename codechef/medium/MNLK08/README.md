# MNLK08

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in u25a85a0539 25a85a0539@sves.org.in

You are given an array of integers $numbers$ of length $n$.

Your task is to compute the  **prime factorisation**  of each number and return the result as a list of lists, where each inner list contains the prime factors in  **ascending order**.

## Function Declaration
### Function Name

$primeFactorization$ – This function computes the prime factors of each number in the given array.

### Parameters
- $numbers$ : A list of integers of length $n$, where each integer represents a number to factorize.
### Return Value
- Returns a list of lists. Each inner list contains the prime factors of the corresponding number in ascending order.

`The input and output formats given below are only if you want to test using custom inputs.`

## Constraints
- $1 \leq n \leq 10^5$
- $2 \leq numbers[i] \leq 2 \times 10^5$
### Input Format
- The first line contains a single integer $n$ — the number of elements in the array.
- The second line contains $n$ space-separated integers — the elements of the array $numbers$.
### Output Format
- Print $n$ lines.
- Each line contains the prime factors of the corresponding number in ascending order, separated by spaces.
### Sample 1:
Input
Output

```
3
8 9 10
```

```
2 2 2
3 3
2 5
```

### Explanation:
- 8 = 2 × 2 × 2
- 9 = 3 × 3
- 10 = 2 × 5
### Sample 2:
Input
Output

```
3
14 21 25
```

```
2 7
3 7
5 5
```

### Explanation:
- 14 = 2 × 7
- 21 = 3 × 7
- 25 = 5 × 5
### Sample 3:
Input
Output

```
2
17 30
```

```
17
2 3 5
```

### Explanation:
- 17 is a prime number.
- 30 = 2 × 3 × 5

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T09:23:31.443Z  

```java
class Solution {

    public List<List<Integer>> primeFactorization(int[] numbers) {
        // write your code here 
        List<List<Integer>> result=new ArrayList<>();
        if(numbers == null)
        return result;
        for(int num : numbers)
        {
            List<Integer> factors=new ArrayList<>();
            int temp=num;
            while(temp%2==0)
            {
                factors.add(2);
                temp/=2;
            }
            for(int d=3;(long) d*d<=temp;d+=2)
            {
                while(temp %d==0)
                {
                    factors.add(d);
                    temp/=d;
                }
            }
            if(temp>1)
            {
                factors.add(temp);
            }
            result.add(factors);
        }
        return result;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/MNLK08)