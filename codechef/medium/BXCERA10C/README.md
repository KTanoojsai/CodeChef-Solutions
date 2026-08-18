# BXCERA10C

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Reading Product Data from a CSV File
- In this worked example, we demonstrate how to read product information from a structured CSV (Comma-Separated Values) file and reconstruct it into custom Java objects using FileReader and BufferedReader.
- The program defines a Product class containing three common attributes: name (product name) price (in double) quantity (in int)
- The main() method opens a file named products.csv, which is expected to store product data in a tabular format with a header followed by one product per line. The program reads each line, parses the values using the split() method, and creates corresponding Product objects.
- An ArrayList<Product> is used to collect all the reconstructed products from the file. Finally, the program prints the list of products to the console in a readable format using the toString() method. This example focuses on reading object data from a CSV file and rebuilding it into Java objects.

 **When executed, the program will show:** 

```
Successfully read from products.csv  
Product{name='Laptop', price=1200.0, quantity=5}  
Product{name='Mouse', price=25.0, quantity=50}  
Product{name='Keyboard', price=75.0, quantity=20}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-18T17:24:37.053Z  

```cpp
                if (values.length == 3) {
                    String name = values[0];
                    double price = Double.parseDouble(values[1]);
                    int quantity = Integer.parseInt(values[2]);

                    Product product = new Product(name, price, quantity);
                    readProducts.add(product);
                } else {
                    System.out.println("Skipping invalid line: " + line);
                }
                line = reader.readLine();
            }
            reader.close();
            System.out.println("Successfully read from " + filename);
            // Print the read products
            for (Product product : readProducts) {
                System.out.println(product);
            }

        } catch (Exception e) {
            System.out.println("Error reading file.");
                String[] values = line.split(",");
            String line = reader.readLine();
            while (line != null) {

            BufferedReader reader = new BufferedReader(fileReader);
            
            reader.readLine(); // Discard the header
        try {
            FileReader fileReader = new FileReader(filename);
        // Reading from CSV -----------------------
        ArrayList<Product> readProducts = new ArrayList<>();
        String filename = "products.csv";

    }
}

class Codechef {
    public static void main(String[] args) {
        return "Product{name='" + name + "', price=" + price + ", quantity=" + quantity + '}';
```

---

[View on CodeChef](https://www.codechef.com/problems/BXCERA10C)