# BXCERA08

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Store Product Data to CSV File
- In this worked example, we demonstrate how to build a simple inventory system that stores product information in a structured CSV (Comma-Separated Values) file using Java's FileWriter class.
- The program defines a Product class containing three common attributes: name (product name) price (in double) quantity (in integer)
- The main() method creates a list of sample Product objects and saves their data to a file named products.csv. The data is written in a human-readable format with a header row and one row per product.
- ArrayList<Product> is used to store multiple product entries; this example focuses on writing object data to a CSV file.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-18T17:23:33.260Z  

```cpp
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
```

---

[View on CodeChef](https://www.codechef.com/problems/BXCERA08)