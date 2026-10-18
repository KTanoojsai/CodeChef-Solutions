// write your code here
const http = require('http');
const url = require('url');

// Hardcoded product database
const products = {
  '123': { name: 'Example Product', price: '$25' },
    '456': { name: 'Another Product', price: '$50' }
    };

    const server = http.createServer((req, res) => {
      const parsedUrl = url.parse(req.url, true);
        const pathname = parsedUrl.pathname;
          const productId = parsedUrl.query.id;

            if (pathname === '/product') {
                if (!productId || productId.trim() === '') {
                      res.writeHead(400, { 'Content-Type': 'text/plain' });
                            res.end('Error: Product ID is required');
                                } else if (products[productId]) {
                                      const product = products[productId];
                                            res.writeHead(200, { 'Content-Type': 'text/plain' });
                                                  res.end(`Product ID: ${productId}, Name: ${product.name}, Price: ${product.price}`);
                                                      } else {
                                                            res.writeHead(404, { 'Content-Type': 'text/plain' });
                                                                  res.end('Not Found');
                                                                      }
                                                                        } else {
                                                                            res.writeHead(404, { 'Content-Type': 'text/plain' });