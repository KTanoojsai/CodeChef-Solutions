# SCZDLL04

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Validating Employee Salary
- Let's practice validating object creation. In real-world applications, employee data must be validated before storing it. Specifically, an employee's salary should never be negative, as it represents an invalid or corrupt data entry.
- We'll create an Employee class and ensure that an employee can only be created with a non-negative salary to ensure data integrity, constructors should include validation logic to catch such errors during object creation.

 **Task to Perform:** 

- Inside the constructor of Employee class, validate that the salary is not negative.
- If it is, throw an IllegalArgumentException with a relevant message.

 **Expected Output** 

```
Employee 1 Salary: 50000.0
Exception caught: Salary must be non-negative.

```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-18T17:27:18.208Z  

```java
class Employee {
    private double salary;

    public Employee(double salary) {
        if (salary < 0) {
            throw new IllegalArgumentException("Salary must be non-negative.");
        }
        this.salary = salary;
    }

    public double getSalary() {
        return salary;
    }

    public static void main(String[] args) {
        try {
            Employee employee1 = new Employee(50000.0);
            System.out.println("Employee 1 Salary: " + employee1.getSalary());

            Employee employee2 = new Employee(-1000.0);
            System.out.println("Employee 2 Salary: " + employee2.getSalary()); // This line should not be reached

        } catch (IllegalArgumentException e) {
            System.out.println("Exception caught: " + e.getMessage());
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/SCZDLL04)