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