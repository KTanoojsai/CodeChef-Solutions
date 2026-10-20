//  write your code here
const express = require('express');
const app = express();
const port = 3000;

// Middleware to log route and time
const timeLogger = (req, res, next) => {
  const currentTime = new Date().toLocaleString();
    console.log(`Route: ${req.originalUrl}, Time: ${currentTime}`);
      next();
      };

      // Use the middleware
      app.use(timeLogger);

      // Routes
      app.get('/', (req, res) => {
        res.send('Home Page');
        });

        app.get('/about', (req, res) => {
          res.send('About Page');
          });

          // Start the server
          app.listen(port, () => {
            console.log(`Server listening on port ${port}`);
            });