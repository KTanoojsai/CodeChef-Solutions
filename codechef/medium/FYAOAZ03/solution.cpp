const express = require('express');
const path = require('path');
const app = express();

// Set EJS as the templating engine
app.set('view engine', 'ejs');

// Set the views directory correctly
app.set('views', path.join(__dirname, 'views'));

// Define a route for the homepage (/)
app.get('/', (req, res) => {
    res.render('index');
    });

    // Start the server on port 3000
    app.listen(3000, () => {
        console.log('Server is running on port 3000');
        });