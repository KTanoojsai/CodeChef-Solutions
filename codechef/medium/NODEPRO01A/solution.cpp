const express = require('express');
const app = express();
const path = require('path');

// 1. Complete the serving of public folder for css
app.use(express.static(path.join(__dirname, 'public')));

// Set EJS as the view engine
app.set('view engine', 'ejs');

// 2. Complete the serving of frontend files from views folder
app.set('views', path.join(__dirname, 'views'));

// 3. Set the / route as home route and serve the index.ejs file from views folder
app.get('/', (req, res) => {
    res.render('index');
    });

    app.listen(3000, () => {
        console.log('Server is running on port 3000');
        });