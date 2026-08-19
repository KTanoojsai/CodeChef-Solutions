import java.util.Scanner;

class Person {
    private int age;

    public void setAge(int age) {
        if (age >= 0 && age <= 120) {
            this.age = age;
        } else {
            System.out.println("Invalid age: " + age + ". Age must be between 0 and 120.");
        }
    }

    public int getAge() {
        return age;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Person person = new Person();

        int inputAge1 = sc.nextInt();
        person.setAge(inputAge1);
        System.out.println("Age: " + person.getAge());

        int inputAge2 = sc.nextInt();
        person.setAge(inputAge2);
        System.out.println("Age: " + person.getAge());

        int inputAge3 = sc.nextInt();
        person.setAge(inputAge3);
        System.out.println("Age: " + person.getAge());
    }
}
