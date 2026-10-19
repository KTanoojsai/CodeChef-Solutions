  console.log(`Server is running on http://localhost:${PORT}`);
  });

// Start the server
app.listen(PORT, () => {

// Serve static files from the "public" directory
app.use(express.static('public'));
const express = require('express');
const app = express();
const PORT = 3000;