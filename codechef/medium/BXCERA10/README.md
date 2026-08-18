# BXCERA10

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Reading Employee Records from a CSV File
- A company maintains a CSV (Comma-Separated Values) file containing information about its employees. Each row in the file holds details for a single employee: their name, role, and salary.
- The company now wants to build a Java application that can read this CSV file, parse the data, and store it as a list of Employee objects for further processing or display.
- You are provided with a partially implemented Java program, including: An Employee class that stores employee details (name, role, salary). A Codechef class that calls a method to read employee data from a file and prints each employee. An EmployeeDataHandler class with a placeholder method readEmployeesFromCsv(), which you need to complete.

 **Task** 
Implement the method `readEmployeesFromCsv(String filePath)` in the `EmployeeDataHandler` class so that it:

- Reads a CSV file from the given path.
- Skips the header row (assumed to be: Name,Role,Salary).
- Parses each remaining line into an Employee object.
- Adds each Employee to an ArrayList<Employee>.
- Returns the list of employees.

 **Expected Output:** 

```
Employee{name='Alice', role='Developer', salary=60000.0}
Employee{name='Bob', role='Manager', salary=75000.5}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-18T17:24:55.843Z  

```cpp
        ArrayList<Employee> employees = new ArrayList<>();
        try {
            FileReader fileReader = new FileReader(filePath);
            BufferedReader reader = new BufferedReader(fileReader);
            // skip the header line
            reader.readLine();

            String line = reader.readLine();
            while (line != null) {
                String[] data = line.split(",");
                String name = data[0];
                String role = data[1];
                double salary = Double.parseDouble(data[2]);
                employees.add(new Employee(name, role, salary));
                line = reader.readLine();
            }
        } catch (Exception e) {
            System.out.println("Error reading from CSV file.");
        }
        return employees;
    }
}

class Codechef {
    public static void main(String[] args) {

        // Read the employees from the CSV file
        ArrayList<Employee> readEmployees = EmployeeDataHandler.readEmployeesFromCsv("employees.csv");

        // Print the employees
        for (Employee employee : readEmployees) {
            System.out.println(employee);
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/BXCERA10)