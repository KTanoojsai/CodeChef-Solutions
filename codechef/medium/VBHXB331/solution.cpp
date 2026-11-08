import express from 'express';

const app = express();
const PORT = 8080;

app.get('/', (req, res) => {
  res.send('Blog API is running...');
  });

  app.listen(PORT, () => {
    console.log(`Server running on port ${PORT}`);
    });