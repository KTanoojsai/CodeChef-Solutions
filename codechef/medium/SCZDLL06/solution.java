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