# VBHXB60

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Greeting Server

Create a Node.js HTTP server that greets the user with a personalized message. The server uses a  **hardcoded username** . If the username is a non-empty string, the server responds with a greeting like `"Hello, [USERNAME]!"`. If the username is empty or not set, the server responds with a generic greeting like `"Hello, Guest!"`.

### Tasks:
- Require the http module.
- Define a hardcoded variable named USERNAME at the top of the file and assign it a name (e.g., "Harry").
- Create an HTTP server using http.createServer().
- Inside the request handler function: Check if the USERNAME is a non-empty string (after trimming). If it is, use it to form a greeting like "Hello, Harry!". Otherwise, fall back to a default greeting "Hello, Guest!".
- Set the Content-Type header to text/plain to indicate plain text response.
- Write the greeting message to the response body using res.write().
- End the response using res.end().
- Make the server listen on port 3000 using server.listen().

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-18T07:03:29.602Z  

```cpp
// write your code here
// 1. Require the http module
const http = require('http');

// 2. Define a hardcoded variable named USERNAME
const USERNAME = "Harry";

// 3. Create the HTTP server
const server = http.createServer((req, res) => {
  // 4. Check if USERNAME is a non-empty string after trimming
    let greeting = "Hello, Guest!";
      if (typeof USERNAME === 'string' && USERNAME.trim().length > 0) {
          greeting = `Hello, ${USERNAME.trim()}!`;
            }

              // 5. Set Content-Type header to text/plain
                res.setHeader('Content-Type', 'text/plain');

                  // 6. Write the greeting message using res.write()
                    res.write(greeting);

                      // 7. End the response using res.end()
                        res.end();
                        });

                        // 8. Listen on port 3000
                        server.listen(3000, () => {
                          console.log('Server running on port 3000');
                          });
```

---

[View on CodeChef](https://www.codechef.com/problems/VBHXB60)