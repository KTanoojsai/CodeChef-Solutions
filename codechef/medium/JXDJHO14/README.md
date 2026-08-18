# JXDJHO14

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Display Employee Details
- Let’s practice how to override the toString() method to produce meaningful and user-friendly output from objects.
- In this problem, you are given an Employee class that stores details such as the employee’s name, ID, and designation. By default, printing an object would result in unhelpful output like Employee@15db9742.

To make the output informative, your  **task**  is to  **override**  the `toString()` method so that it returns a well-formatted string showing the employee's information.

 **Expected Output:** 

```
Employee[name=Bob Smith, id=1001, designation=Software Engineer]

```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-18T17:20:11.364Z  

```java
class Employee {
    String name;
    int id;
    String designation;

    public Employee(String name, int id, String designation) {
        this.name = name;
        this.id = id;
        this.designation = designation;
    }

    @Override
    public String toString() {
        return "Employee[name=" + name + ", id=" + id + ", designation=" + designation + "]";
    }
}

class Codechef {
    public static void main(String[] args) {

        Employee employee1 = new Employee("Bob Smith", 1001, "Software Engineer");
        
        System.out.println(employee1);
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/JXDJHO14)