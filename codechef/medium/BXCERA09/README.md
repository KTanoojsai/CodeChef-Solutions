# BXCERA09

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Storing Employee Records in a CSV File
- Imagine a company that wants to digitally store its employee records—including their names, roles, and salaries—in a structured format. To do this, they plan to save all employee data in a CSV (Comma-Separated Values) file, which can later be read by spreadsheet software or other programs.
- In the provided code, an Employee class is defined to hold the basic details of each employee. A list of Employee objects is created and populated with sample data.
- Your task is to complete the writeEmployeesToCsv() method inside the EmployeeDataHandler class so that it correctly writes all employee data to a CSV file. Each line in the file should represent one employee, with their name, role, and salary separated by commas.

 **Task** 

- Implement the method writeEmployeesToCsv() which:
- Opens or creates a file at the given path.
- Writes a header row: Name,Role,Salary.
- Writes each employee’s details in a new line, in the format: John Doe,Software Engineer,75000.0.
- If the file is written successfully, print: Successfully wrote to employees.csv
- If any error occurs during the file-writing process, catch the exception and print: Error writing to CSV file.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-18T17:24:17.905Z  

```cpp

class EmployeeDataHandler {
    public static void writeEmployeesToCsv(ArrayList<Employee> employees, String filePath) {
        try {
            FileWriter fileWriter = new FileWriter(filePath);
            BufferedWriter writer = new BufferedWriter(fileWriter);
            // Write the header
            writer.write("Name,Role,Salary");
            writer.newLine();

            // Write the employee data
            for (Employee employee : employees) {
                writer.write(employee.getName() + "," + employee.getRole() + "," + employee.getSalary());
                writer.newLine();
            }
            writer.close();
            System.out.println("Successfully wrote to " + filePath);
        } catch (Exception e) {
            System.out.println("Error writing to CSV file.");
        }
    }
}

class Codechef {
    public static void main(String[] args) {
        // Create a list of Employee objects
        ArrayList<Employee> employees = new ArrayList<>();
        employees.add(new Employee("John Doe", "Software Engineer", 75000.0));
        employees.add(new Employee("Jane Smith", "Data Scientist", 80000.0));
        employees.add(new Employee("Peter Jones", "Project Manager", 90000.0));

        // Write the employees to a CSV file
        EmployeeDataHandler.writeEmployeesToCsv(employees, "employees.csv");
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/BXCERA09)