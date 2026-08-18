# SCZDLL05

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Validate Product Price

Let's practice  **validating object creation**. You've to create a `Product`  **class**  and ensure that a product can only be created with a non-negative price.

 **Task to perform:** 

- Create a private instance in Product class.
- In Product class every product should have a price so create a parameterized constructor which initializes price of a product. However, a product's price cannot be negative so you have to implement validation within the Product class's constructor to ensure that only products with valid prices can be created. If an invalid price is provided, we'll throw an IllegalArgumentException.

 **Output format:** 

```
Valid product price: 99.99
Exception caught: Price must be non-negative.

```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-18T17:27:31.809Z  

```java
class Product {
    private double price;

    public Product(double price) {
        if (price < 0) {
            throw new IllegalArgumentException("Price must be non-negative.");
        }
        this.price = price;
    }

    public double getPrice() {
        return price;
    }

    public static void main(String[] args) {
        try {
            Product validProduct = new Product(99.99);
            System.out.println("Valid product price: " + validProduct.getPrice());

            Product invalidProduct = new Product(-10.0);
            System.out.println("Invalid product price: " + invalidProduct.getPrice()); // This line will not be executed

        } catch (IllegalArgumentException e) {
            System.out.println("Exception caught: " + e.getMessage());
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/SCZDLL05)