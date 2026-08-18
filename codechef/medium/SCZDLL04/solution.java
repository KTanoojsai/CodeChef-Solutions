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