            favoriteColors[name] = color;
              res.send(`Favorite color for ${name} saved as ${color}`);
              });

              // GET /color/:name
              app.get("/color/:name", (req: Request, res: Response) => {
                const { name } = req.params;
                  const color = favoriteColors[name];
                    if (color) {
                        res.send(`${name}'s favorite color is ${color}`);
                          } else {
                              res.send(`Color for ${name} not found`);
                                }
                                });

                                // Only start the server if this file is run directly
                                if (require.main === module) {
                                  app.listen(port, () => {
                                      console.log(`Server running at http://localhost:${port}`);
                                        });
                                        }

                                        export default app;