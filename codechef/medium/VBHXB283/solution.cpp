        */
        app.post("/store", (req, res) => {
            const { key, value } = req.body;
                
                    redisClient.set(key, value, (err) => {
                            if (err) {
                                        return res.status(500).send("Error storing value");
                                                }
                                                        res.send(`Stored key: ${key} with value: ${value}`);
                                                            });
                                                            });

                                                            /**
                                                             * GET /retrieve/:key
                                                              * Retrieve value from Redis by key
                                                               */
                                                               app.get("/retrieve/:key", (req, res) => {
                                                                   const { key } = req.params;
                                                                       
                                                                           redisClient.get(key, (err, reply) => {
                                                                                   if (err) {
                                                                                               return res.status(500).send("Error retrieving value");
                                                                                                       }
                                                                                                               
                                                                                                                       if (reply === null || reply === undefined) {
                                                                                                                                   return res.send("Key not found");
                                                                                                                                           }
                                                                                                                                                   