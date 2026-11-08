# JBFUYU08

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Todo List CRUD API

Great job on understanding the basics of mapping CRUD operations to HTTP methods! Now it's time to put that knowledge into practice.

You are building the backend for a simple To-Do List application. You have already been provided with the basic Express server setup, a Mongoose connection, and a `Todo` model.

The `Todo` model has a very simple structure:

- description: A String describing the task.
- completed: A Boolean indicating if the task is done (defaults to false).

Your job is to complete the API by implementing the four core CRUD endpoints. You need to fill in the logic for each route to interact with the MongoDB database using Mongoose.

#### Task using Mongoose functions:
- POST /todos: Complete the code to save new data in databse.
- GET /todos: Complete the code to find all the todos.
- PUT /todos/:id: Complete the code to find and update the todo with the particular id.
- DELETE /todos/:id: Complete the code to delete the todo with the given id.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-08T07:13:53.232Z  

```cpp
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

```

---

[View on CodeChef](https://www.codechef.com/problems/JBFUYU08)