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