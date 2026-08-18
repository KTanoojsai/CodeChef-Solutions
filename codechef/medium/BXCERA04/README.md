# BXCERA04

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Employee Records Persistence
- Imagine a system that needs to preserve employee records—including their name and salary—between program executions. To achieve this, the company decides to use serialization, a technique in Java that allows objects to be converted into a byte stream and saved to a file.
- In the provided code, an Employee class is defined with fields for name and salary. The goal is to serialize an Employee object to a file and then later deserialize it back into a usable object.

 **Task** 
You are required to complete the following two methods:

- saveEmployee() method in the SaveEmployee class: Serializes the provided Employee object. Writes it to a file with the given filename. On successful save, print: Serialized data is saved in <filename>
- loadEmployee() in the LoadEmployee class: Reads the serialized object from the given file. Deserializes it back into an Employee object. If successful, return the deserialized object.

 **Expected Output:** 

```
Serialized data is saved in employee.ser
Employee{name='John Doe', salary=60000.0}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-18T17:25:42.052Z  

```cpp
        } catch (IOException e) {
            System.out.println("An error occurred while saving the employee object to the file.");
        }
    }
}

class LoadEmployee {
    public static Employee loadEmployee(String filename) {
        Employee employee = null;
        try {
            FileInputStream fileIn = new FileInputStream(filename);
            ObjectInputStream in = new ObjectInputStream(fileIn);
            employee = (Employee) in.readObject();
        } catch (IOException | ClassNotFoundException e) {
            System.out.println("An error occurred while loading the employee object from the file.");
        }
        return employee;
    }
}

class Codechef {
    public static void main(String[] args) {
        // Create an Employee object
        Employee employee = new Employee("John Doe", 60000.0);

        // Save the employee object to a file
        SaveEmployee.saveEmployee(employee, "employee.ser");

        // Load the employee object from the file
        Employee loadedEmployee = LoadEmployee.loadEmployee("employee.ser");

        // Print the loaded employee's details
        System.out.println(loadedEmployee);
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/BXCERA04)