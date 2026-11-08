// write your code here.
const express = require('express');
const app = express();
const port = 3000;

// 1. Root path ('/')
app.get('/', (req, res) => {
    res.send('Welcome to our services page!');
    });

    // 2. '/web' path
    app.get('/web', (req, res) => {
        res.send('We specialize in Web Development.');
        });

        // 3. '/mobile' path
        app.get('/mobile', (req, res) => {
            res.send('We also offer Mobile App Development.');
            });

            // Start the server
            app.listen(port, () => {
                console.log(`Server is running on port ${port}`);
                });