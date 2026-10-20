const express = require('express');
const app = express();
const port = 3000;

// Middleware to parse URL-encoded form data and JSON payloads
app.use(express.urlencoded({ extended: false }));
app.use(express.json());

// Route to handle HTML form submissions
app.post('/submit-feedback-form', (req, res) => {
  console.log('Form data received:');
    console.log(req.body);
      res.send('Feedback form data received!');
      });

      // Route to handle JSON submissions
      app.post('/submit-feedback-json', (req, res) => {
        console.log('JSON data received:');
          console.log(req.body);
            res.json({ message: 'Feedback JSON data received!' });
            });

            // Start the server
            app.listen(port, () => {
              console.log(`Server running on port ${port}`);
              });