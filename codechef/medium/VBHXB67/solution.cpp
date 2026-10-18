const http = require('http');
const fs = require('fs');
const path = require('path');

const server = http.createServer((req, res) => {
  if (req.url === '/') {
      res.writeHead(200, { 'Content-Type': 'text/plain' });
          res.end('Home Page');
            } else if (req.url === '/message') {
                const filePath = path.join(__dirname, 'public', 'message.txt');

                    fs.readFile(filePath, 'utf8', (err, data) => {
                          if (err) {
                                  res.writeHead(500, { 'Content-Type': 'text/plain' });
                                          res.end('Internal Server Error');
                                                } else {
                                                        res.writeHead(200, { 'Content-Type': 'text/plain' });
                                                                res.end(data);
                                                                      }
                                                                          });
                                                                            } else {
                                                                                res.writeHead(404, { 'Content-Type': 'text/plain' });
                                                                                    res.end('Not Found');
                                                                                      }
                                                                                      });

                                                                                      server.listen(3000, () => {
                                                                                        console.log('Server is running on port 3000');
                                                                                        });