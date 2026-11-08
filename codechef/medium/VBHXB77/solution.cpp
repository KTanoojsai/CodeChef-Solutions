// write your code here.
const express = require('express');
const app = express();
const port = 3000;

// Route handler for path '/hello'
app.get('/hello', (req, res) => {
    // Extract requested URL from req.url
        const requestedUrl = req.url;
            
                // Send back the URL as response
                    res.send(requestedUrl);
                    });

                    // Start the server on port 3000
                    app.listen(port, () => {
                        console.log(`Server is running on port ${port}`);
                        });