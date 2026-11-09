# NIPFVX02

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Planning Product Data Structures (SQL vs NoSQL)

Now that you have a basic understanding of the differences between SQL and NoSQL databases, let's work through a practical thought experiment.

 **Scenario:** 

Imagine we're working on our Express.js application. We've learned how to handle incoming data using `req.body` (for example, from a form submission). Now, we want to plan how we would store information about different types of products that our application might sell.

Let's say we have two types of products:

- Books: Have a name, price, description, author, and pages.
- T-Shirts: Have a name, price, description, color, size, and material.

Notice that both products share some common fields (`name`, `price`, `description`), but they also have fields unique to their type.

 **The Task:** 

Our goal is to  *conceptually plan*  how we might structure this data if we were to use:

- An SQL (relational) database.
- A NoSQL (document) database (like MongoDB, which we'll be focusing on soon).

We won't be writing any actual database connection code yet. Instead, we'll use a simple Node.js script with JavaScript objects to represent how these product records or documents might look. This will help us visualize the difference in structure.

 **Let's walk through the solution:** 

We'll create a Node.js script. In this script:

- We'll simulate having received data for a new book and a new t-shirt (as if it came from req.body).
- Then, we'll show how we might represent these products for an SQL database.
- After that, we'll show how we might represent them for a NoSQL document database.
- We'll use console.log to see our planned structures.

Pay close attention to how the data is organized in each approach, especially concerning the fields that are not common to all product types.

 **Here's the code you will run. Copy this into a file (e.g., `database_planning.js`), run it with `node database_planning.js`, and observe the output.**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-09T13:24:02.154Z  

```cpp
                                                                                                                                                                        price: incomingTShirt.price,
                                                                                                                                                                                description: incomingTShirt.description,
                                                                                                                                                                                        author: null,
                                                                                                                                                                                                pages: null,
                                                                                                                                                                                                        color: incomingTShirt.color,
                                                                                                                                                                                                                size: incomingTShirt.size,
                                                                                                                                                                                                                        material: incomingTShirt.material
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                            ];

                                                                                                                                                                                                                            console.log(JSON.stringify(sqlProductsTable, null, 2));

                                                                                                                                                                                                                            // 3. NoSQL (MongoDB) Representation
                                                                                                                                                                                                                            // In a document collection, documents are schema-flexible.
                                                                                                                                                                                                                            // Each document contains only the fields relevant to itself.
                                                                                                                                                                                                                            console.log("\n--- NoSQL / Document Representation (Collection: products) ---");

                                                                                                                                                                                                                            const noSqlProductDocuments = [
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                        _id: "650c1f1e1c9d440000a1",
                                                                                                                                                                                                                                                productType: "book",
                                                                                                                                                                                                                                                        name: incomingBook.name,
                                                                                                                                                                                                                                                                price: incomingBook.price,
                                                                                                                                                                                                                                                                        description: incomingBook.description,
                                                                                                                                                                                                                                                                                author: incomingBook.author,
                                                                                                                                                                                                                                                                                        pages: incomingBook.pages
                                                                                                                                                                                                                                                                                            },
                                                                                                                                                                                                                                                                                                {
```

---

[View on CodeChef](https://www.codechef.com/problems/NIPFVX02)