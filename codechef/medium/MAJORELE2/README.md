# MAJORELE2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Superstar Dishes

Chef recently organised a  **Grand Feast**  where he served $n$  **different dishes**  to his friends.
Each friend picked their favourite dish, and now Chef has a list of all the dishes chosen.

Chef is curious:

- Which dishes were so popular that they were chosen by more than $⌊n/3⌋$ friends? Print the dishes in increasing order of popularity of dish among the friends.

Can you help Chef find these  **superstar dishes** ?

## Function Declaration
### Function Name

$findSuperstarDishes$ – This function finds all dishes that appear more than ⌊n/3⌋ times.

### Parameters
- $a$ : An array representing the dishes chosen by friends.
- $n$ : The number of dishes.
### Return Value
- This function returns the array in ascending order.
## Constraints
- $1 \leq n \leq 5 \times 10^4$
- $−10^9 \leq a[i] \leq 10^9$
- The output may contain at most two dishes (by pigeonhole principle)
### Input Format
- The first line of each test case contains a single integer $n$ — the number of dishes.
- The next line contains $n$ space-separated integers $a[i]$ — the dishes chosen by friends.
### Output Format
- For each test case, print on a new line all dishes that were chosen by more than ⌊n/3⌋ friends, in increasing order.
- If no such dish exists, print nothing for that test case.
### Sample 1:
Input
Output

```
6
2 2 1 1 1 2

```

```
1 2
```

### Explanation:

Here,  **n = 6**, so `[n/3]` = 2.

- Dish 1 appears 3 times -> more than 2
- Dish 2 appears 3 times -> more than 2 So, both 1 and 2 are superstar dishes.
### Sample 2:
Input
Output

```
7
5 5 5 1 2 3 4

```

```
5

```

### Explanation:

Here,  **n = 7**, so `[n/3]` = 2.

- Dish 5 appears 3 times -> more than 2.
- Other dishes (1,2,3,4) appear only once -> not more than 2. So, the answer is 5.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-15T06:41:36.806Z  

```java
public static List<Long> findSuperstarDishes(List<Long> a, int n) {
    // write your code here 
    Map<Long, Integer> frequency = new HashMap<>();
    for (Long dish : a) {
        frequency.put(dish, frequency.getOrDefault(dish, 0) + 1);
    }
    int limit = n / 3;
    List<Long> result = new ArrayList<>();
    for (Map.Entry<Long, Integer> entry : frequency.entrySet()) {
        if (entry.getValue() > limit) {
            result.add(entry.getKey());
        }
    }
    result.sort((x, y) -> {
        int frequencyComparison =
            Integer.compare(frequency.get(x), frequency.get(y));
        if (frequencyComparison != 0) {
            return frequencyComparison;
        }
        return Long.compare(x, y);
    });
    return result; 
}
```

---

[View on CodeChef](https://www.codechef.com/problems/MAJORELE2)