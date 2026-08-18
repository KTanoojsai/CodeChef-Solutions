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