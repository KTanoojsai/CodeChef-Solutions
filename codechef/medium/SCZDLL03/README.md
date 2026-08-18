# SCZDLL03

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Validating a Circle Object

Let's solidify your understanding of  **validating object creation**  with a worked-out example. We're creating a `Circle`  **class**  and ensuring that a circle can only be created with a positive radius.

 **Working of example:** 

- This program demonstrates object creation with validation using exception handling.
- The Circle class has a private radius field and a constructor that throws an IllegalArgumentException if the radius is zero or negative, ensuring only valid circles are created.
- The getRadius method returns the radius value.
- In the Main class, Circle objects are created inside a try block. If an invalid radius is passed, the exception is caught, and an error message is displayed using the catch block. This ensures the program doesn't crash and handles invalid input gracefully.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-18T17:27:06.760Z  

```java
class Circle {
    private double radius;

    public Circle(double radius) throws IllegalArgumentException {
        if (radius <= 0) {
            throw new IllegalArgumentException("Radius must be positive.");
        }
        this.radius = radius;
    }

    public double getRadius() {
        return radius;
    }
}

public class Main {
    public static void main(String[] args) {
        try {
            Circle circle1 = new Circle(5.0);
            System.out.println("Circle created with radius: " + circle1.getRadius());

            Circle circle2 = new Circle(-2.0); // This will throw an exception
            System.out.println("Circle created with radius: " + circle2.getRadius()); // This line won't be executed

            Circle circle3 = new Circle(0.0); // This will throw an exception
            System.out.println("Circle created with radius: " + circle3.getRadius()); // This line won't be executed
        } catch (IllegalArgumentException e) {
            System.out.println("Error creating circle: " + e.getMessage());
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/SCZDLL03)