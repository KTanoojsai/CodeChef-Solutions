class Circle {
    private double radius;

    public Circle(double radius) throws IllegalArgumentException {
        if (radius <= 0) {
            throw new IllegalArgumentException("Radius must be positive.");
        }
        this.radius = radius;
    }

    public double getRadius() {
        return radius;
    }
}

public class Main {
    public static void main(String[] args) {
        try {
            Circle circle1 = new Circle(5.0);
            System.out.println("Circle created with radius: " + circle1.getRadius());

            Circle circle2 = new Circle(-2.0); // This will throw an exception
            System.out.println("Circle created with radius: " + circle2.getRadius()); // This line won't be executed

            Circle circle3 = new Circle(0.0); // This will throw an exception
            System.out.println("Circle created with radius: " + circle3.getRadius()); // This line won't be executed
        } catch (IllegalArgumentException e) {
            System.out.println("Error creating circle: " + e.getMessage());
        }
    }
}