# CPCZFD09

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### JWT token generation

You are building the backend for your website and want to store the token in the user's browser. The backend should only generate and send the JWT token based on the username provided by the user.

#### Task:

Complete the route `/generate-token`:

- Take the user input from the html as username.
- The token includes a payload with sub: username and is signed using the secret key.
- The token is set to expire in 5 minutes.
- The backend then returns the generated token as a JSON response to the frontend.
#### Note:

The token itself is not stored on the backend. It is the frontend’s responsibility to take the token from the response and store it in the browser, for example in `localStorage`, `sessionStorage`, or cookies.

Therefore, the backend only handles token generation and signing, while the frontend handles storage and later usage of the token.

You can see the stored token like this:

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-07T14:19:46.867Z  

```cpp
const express = require("express");
const jwt = require("jsonwebtoken");
const path = require("path");

const app = express();
const SECRET = "mySuperSecretKey123";

app.use(express.json());

// Serve HTML file
app.get("/", (req, res) => {
    res.sendFile(path.join(__dirname, "index.html"));
    });

    // Generate JWT token route
    app.post("/generate-token", (req, res) => {
        const { username } = req.body;

            // Validate input
                if (!username) {
                        return res.status(400).json({ error: "Username is required" });
                            }

                                // Create payload
                                    const payload = { sub: username };

                                        // Sign token with 5-minute expiry
                                            const token = jwt.sign(payload, SECRET, { expiresIn: "5m" });

```

---

[View on CodeChef](https://www.codechef.com/problems/CPCZFD09)