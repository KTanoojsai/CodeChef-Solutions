const express = require('express');
const app = express();
const port = 3000;

app.set('view engine', 'ejs');

app.get('/', (req, res) => {
  const user = {
    firstName: "John",
    lastName: "Doe"
  };
  res.render('greeting', { user: user });
});

app.listen(port, () => {
  console.log(`Server listening at http://localhost:${port}`);
});
