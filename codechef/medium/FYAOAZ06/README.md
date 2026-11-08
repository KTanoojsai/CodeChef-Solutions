# FYAOAZ06

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Display a Greeting Message

Okay, you've just learned how to display product details using EJS templates. Now, let's try another example. This time, we'll display a personalized greeting message on a webpage.

Imagine you have a user object in your Node.js code containing the user's first name and last name, and you want to display a welcome message like "Hello, [FirstName] [LastName]!" on the webpage. We'll use EJS to insert the user's first name and last name into our HTML template.

### Task:

In the `greeting.ejs` file, access the user's first name using `<%= user.firstName %>` and the last name using `<%= user.lastName %>`.

The final output should display "Hello, John Doe!" on the webpage.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-08T21:35:11.066Z  

```cpp
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

```

---

[View on CodeChef](https://www.codechef.com/problems/FYAOAZ06)