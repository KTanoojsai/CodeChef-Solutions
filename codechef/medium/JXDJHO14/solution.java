class Employee {
    String name;
    int id;
    String designation;

    public Employee(String name, int id, String designation) {
        this.name = name;
        this.id = id;
        this.designation = designation;
    }

    @Override
    public String toString() {
        return "Employee[name=" + name + ", id=" + id + ", designation=" + designation + "]";
    }
}

class Codechef {
    public static void main(String[] args) {

        Employee employee1 = new Employee("Bob Smith", 1001, "Software Engineer");
        
        System.out.println(employee1);
    }
}