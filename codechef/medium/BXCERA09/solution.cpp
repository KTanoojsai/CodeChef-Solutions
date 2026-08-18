
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