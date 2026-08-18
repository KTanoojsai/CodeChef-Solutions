        products.add(new Product("Laptop", 1200.0, 5));

class Codechef {
    public static void main(String[] args) {
        // Writing to CSV
        ArrayList<Product> products = new ArrayList<>();
    public String toString() {
        return "Product{name='" + name + "', price=" + price + ", quantity=" + quantity + '}';
    }
}

class Product {
    private String name;
    private double price;
    private int quantity;

    public Product(String name, double price, int quantity) {
        this.name = name;
        this.price = price;
        this.quantity = quantity;
    }

    public String getName() {
        return name;
    }

    public double getPrice() {
        return price;
    }

    public int getQuantity() {
        return quantity;
    }

    @Override
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.util.ArrayList;
import java.io.File;