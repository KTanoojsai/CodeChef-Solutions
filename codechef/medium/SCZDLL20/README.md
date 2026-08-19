# SCZDLL20

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Validate Age in a Person class

To hammer it home let's practice another problem on data validation in  **setter**  methods. You're given a `Person`  **class**  where age is accessed and updated but there's a restriction that age should be valid.

- Write the setAge method which should check if value passed to it for age is within the range of 0 to 120 (inclusive) or not.
- If this age parameter is within the range update objects age.
- Otherwise print the message given in IDE and don't update the age of the object.
### Sample 1:
Input
Output

```
25 -2 150
```

```
Age: 25
Invalid age: -2. Age must be between 0 and 120.
Age: 25
Invalid age: 150. Age must be between 0 and 120.
Age: 25
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-19T17:45:45.103Z  

```java
import java.util.Scanner;

class Person {
    private int age;

    public void setAge(int age) {
        if (age >= 0 && age <= 120) {
            this.age = age;
        } else {
            System.out.println("Invalid age: " + age + ". Age must be between 0 and 120.");
        }
    }

    public int getAge() {
        return age;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Person person = new Person();

        int inputAge1 = sc.nextInt();
        person.setAge(inputAge1);
        System.out.println("Age: " + person.getAge());

        int inputAge2 = sc.nextInt();
        person.setAge(inputAge2);
        System.out.println("Age: " + person.getAge());

        int inputAge3 = sc.nextInt();
        person.setAge(inputAge3);
        System.out.println("Age: " + person.getAge());
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SCZDLL20)