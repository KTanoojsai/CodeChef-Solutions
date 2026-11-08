const http = require('http');

const server = http.createServer((req, res) => {
    const currentHour = new Date().getHours();
        let message = '';

            if (currentHour < 12) {
                    message = 'Good morning';
                        } else if (currentHour < 18) {
                                message = 'Good afternoon';
                                    } else {
                                            message = 'Good evening';
                                                }

                                                    res.writeHead(200, { 'Content-Type': 'text/plain' });
                                                        res.end(message);
                                                        });

                                                        const PORT = 3000;
                                                        server.listen(PORT, () => {
                                                            console.log(`Server running at http://localhost:${PORT}/`);
                                                            });

                                                            module.exports = server;