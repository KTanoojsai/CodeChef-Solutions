# VBHXB331

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Setting Up the Basic Backend Server

Okay, fantastic! We've made great progress on the frontend, setting up the UI for displaying blogs and the authentication forms. Now, it's time to bring our backend into play, starting with the very foundation: a simple server.

 **Context:** 

- backend folder is already created in your project root (WORKSPACE/backend).
- Installation of Node.js and the necessary backend packages (e.g., express, dotenv, etc.) is already done, so there is no need to install them again; only write the code.

 **Task:** 
Your task is to create the main server file for our backend and ensure it can start successfully.

 **Update the main server file (`backend/server.js`):** 

- Initialize an Express app.
- Define a constant PORT = 8080.
- Create a GET route for '/' -> send "Blog API is running...".
- Start the server → listen on PORT.
- Log "Server running on port 8080" when it starts.

 **To Verify Your Work:** 

- Simply click the Run button and check your terminal to see if you receive the message: Server running on port 8080.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-08T20:02:22.233Z  

```cpp
import express from 'express';

const app = express();
const PORT = 8080;

app.get('/', (req, res) => {
  res.send('Blog API is running...');
  });

  app.listen(PORT, () => {
    console.log(`Server running on port ${PORT}`);
    });
```

---

[View on CodeChef](https://www.codechef.com/problems/VBHXB331)