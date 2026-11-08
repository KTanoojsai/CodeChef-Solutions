const express = require('express');
const app = express();

// Set EJS as the view engine
app.set('view engine', 'ejs');

// Middleware to use layouts
const expressLayouts = require('express-ejs-layouts');
app.use(expressLayouts);
app.set('layout', 'layout'); // layout.ejs

// Complete the home route with current year
// and pass it to the footer file
app.get('/', (req, res) => {
    const currentYear = new Date().getFullYear();
        
            res.render('index', { 
                    year: currentYear 
                        });
                        });

                        app.listen(3000, () => {
                            console.log('Server running on http://localhost:3000');
                            });