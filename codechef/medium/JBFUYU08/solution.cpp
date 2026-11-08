                                                                            }
                                                                            });

                                                                            app.put('/todos/:id', async (req, res) => {
                                                                              try {
                                                                                  const updatedTodo = await Todo.findByIdAndUpdate(
                                                                                        req.params.id,
                                                                                              req.body,
                                                                                                    { new: true, runValidators: true }
                                                                                                        );

                                                                                                            if (!updatedTodo) {
                                                                                                                  return res.status(404).json({ error: 'Todo not found' });
                                                                                                                      }

                                                                                                                          res.json(updatedTodo);
                                                                                                                            } catch (err) {
                                                                                                                                res.status(400).json({ error: err.message });
                                                                                                                                  }
                                                                                                                                  });

                                                                                                                                  app.delete('/todos/:id', async (req, res) => {
                                                                                                                                    try {
                                                                                                                                        const deletedTodo = await Todo.findByIdAndDelete(req.params.id);

                                                                                                                                            if (!deletedTodo) {
                                                                                                                                                  return res.status(404).json({ error: 'Todo not found' });
                                                                                                                                                      }
