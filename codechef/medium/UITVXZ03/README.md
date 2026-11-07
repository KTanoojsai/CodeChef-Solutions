# UITVXZ03

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Mongoose Product Schema and Model Definition

Great job on going through the worked-out example for defining Mongoose schemas and models! Now it's time for you to put that knowledge into practice with a similar exercise.

 **Your Task:** 

Imagine you are building an inventory management system for a small store. You need to define the structure for a "Product" document that will be stored in MongoDB.

- Define a Mongoose Schema: Create a schema named productSchema for a product with the following fields: productName: Should be a String (e.g., "Laptop Pro"). price: Should be a Number (e.g., 1200.50). stockQuantity: Should be a Number (e.g., 50). category: Should be a String (e.g., "Electronics").
- Create a Mongoose Model: After defining the productSchema, create a Mongoose model named Product based on this schema.
- Verify Your Setup: To confirm that your schema and model are correctly defined in your application, print the following to the console: A success message: "Product Model Created Successfully!" The model's name using Product.modelName. The keys (field names) defined in your schema using Object.keys(productSchema.paths).

 **Instructions:** 

- Create a new.js file (e.g., productApp.js).
- Remember to first require the Mongoose library.
- Follow the steps outlined above to define the schema, create the model, and print the verification messages.
- Run your file using Node.js (e.g., node productApp.js) to see the output.

This exercise will help solidify your understanding of how to structure data definitions using Mongoose before we move on to interacting with the database. Good luck!

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-07T14:57:03.882Z  

```cpp
            useNewUrlParser: true,
                    useUnifiedTopology: true,
                        })
                            .then(() => {
                                    console.log('Connected to MongoDB Atlas');

                                            // Define the product schema
                                                    const productSchema = new mongoose.Schema({
                                                                productName: String,
                                                                            price: Number,
                                                                                        stockQuantity: Number,
                                                                                                    category: String,
                                                                                                            });

                                                                                                                    // Create the Product model
                                                                                                                            const Product = mongoose.model('Product', productSchema);

                                                                                                                                    // Print verification messages
                                                                                                                                            console.log('Product Model Created Successfully!');
                                                                                                                                                    console.log('Model Name:', Product.modelName);
                                                                                                                                                            console.log('Schema Fields:', Object.keys(productSchema.paths));

                                                                                                                                                                    // mongoose.connection.close();
                                                                                                                                                                        })
                                                                                                                                                                            .catch((err) => console.error('Connection error:', err));
```

---

[View on CodeChef](https://www.codechef.com/problems/UITVXZ03)