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
