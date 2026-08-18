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