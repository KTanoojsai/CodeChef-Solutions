// write your code here
const express = require('express');
const app = express();
const PORT = 3000;

// Book data array
const books = [
    { id: 1, title: "The Hitchhiker's Guide to the Galaxy", author: "Douglas Adams" },
        { id: 2, title: "Pride and Prejudice", author: "Jane Austen" },
            { id: 3, title: "1984", author: "George Orwell" }
            ];

            // Root route serving HTML
            app.get('/', (req, res) => {
                res.send('<h1>Welcome to the Book Store!</h1>');
                });

                // Books route serving JSON data
                app.get('/books', (req, res) => {
                    res.json(books);
                    });

                    // Start the server
                    app.listen(PORT, () => {
                        console.log(`Server is running on port ${PORT}`);
                        });