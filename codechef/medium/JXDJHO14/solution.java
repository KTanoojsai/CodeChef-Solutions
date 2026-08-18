class User {
    // Attributes of the User class
    String name;
    String age;

    // Constructor to initialize User object
    User(String name, String age) {
        this.name = name;
        this.age = age;
    }

    // Overriding toString() to provide custom string representation
    @Override
    public String toString() {
        // Returning a formatted string with user details
        return "User Details: { " + "Name: '" + name + "', " + "Age: '" + age + "' }";
    }
}

class Codechef {
    public static void main(String[] args) {
    
        User user1 = new User("Alice", "25");
        
        // Printing the user1 object, which will invoke the toString() method
        System.out.println(user1);

    }
}