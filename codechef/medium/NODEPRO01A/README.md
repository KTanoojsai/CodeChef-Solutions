# NODEPRO01A

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Setting up frontend and server

Let's begin with first making our `server.js` which will be our main server file.

To get our server running we need some files to serve as frontend.

#### Task:
- Complete the serving of public folder for css.
- Complete the serving of frontend files from views folder.
- Set the / route as home route and serve the index.ejs file from views folder.
- Create a notes folder to which works as our database.
#### Expected output after the rendering:

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-08T21:48:47.550Z  

```cpp
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
```

---

[View on CodeChef](https://www.codechef.com/problems/NODEPRO01A)