# JXDJHO13

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Display User Information
- In this example, we demonstrate how to override the toString() method to provide a meaningful string representation of an object in Java.
- By default, printing an object displays its class name followed by a memory address. To make the output more informative, the toString() method is overridden in the User class to return the user's name and age in a readable format.
- When we print the user1 object, the overridden toString() method is automatically invoked, producing human-friendly output.

 **When executed, the code will show:** 

```
User Details: { Name: 'Alice', Age: '25' }

```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-18T17:19:57.420Z  

```java
class User {
    // Attributes of the User class
    String name;
    String age;

    // Constructor to initialize User object
    User(String name, String age) {
        this.name = name;
        this.age = age;
    }

    // Overriding toString() to provide custom string representation
    @Override
    public String toString() {
        // Returning a formatted string with user details
        return "User Details: { " + "Name: '" + name + "', " + "Age: '" + age + "' }";
    }
}

class Codechef {
    public static void main(String[] args) {
    
        User user1 = new User("Alice", "25");
        
        // Printing the user1 object, which will invoke the toString() method
        System.out.println(user1);

    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/JXDJHO13)