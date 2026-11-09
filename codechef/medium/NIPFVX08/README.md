# NIPFVX08

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Connect Express App to MyTasksDB

Alright, you've just learned how to use Mongoose to connect your Node.js application to MongoDB! Now, let's solidify that understanding with a practical example.

#### What this code does:
- Attempt to connect to a MongoDB Atlas database named MyTasksDB.
- Log a success message to the console if the MongoDB connection is established.
- Log an error message to the console if the connection fails.

 **Let's walk through building the solution step-by-step:** 

- Define the MongoDB Atlas Connection URI: This string tells Mongoose where your cloud database is hosted and what it's called. Replace the <username>, <password>, and <cluster> placeholders with your real MongoDB Atlas credentials. const mongoURI = 'mongodb+srv://<username>:<password>@<cluster>.mongodb.net/MyTasksDB?retryWrites=true&w=majority';
- Connect to MongoDB Atlas using Mongoose: This is the core part. We use mongoose.connect() which returns a Promise. We'll use.then() for success and.catch() for errors.

```
mongoose.connect(mongoURI)
 .then(() => {
    console.log('✅ Connected to MongoDB Atlas');
  })
 .catch((err) => {
    console.error('❌ MongoDB connection error:', err);
  });

```

#### Task:

Complete the `mongoURI` with your own MongoDB atlas connection string to connect with the database.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-09T13:29:17.227Z  

```cpp
const port = 3000;

// Use Atlas connection string (use your own string to connect to the database)
const mongoURI = 'mongodb+srv://yuvaraj:Yuva%40123@cluster0.j4cj1y5.mongodb.net/MyTaskDB?retryWrites=true&w=majority';

// Connect to MongoDB Atlas
mongoose.connect(mongoURI)
  .then(() => {
      console.log('✅ Connected to MongoDB Atlas');
        })
          .catch((err) => {
              console.error('❌ MongoDB connection error:', err);
                });

                // Basic route
                app.get('/', (req, res) => {
                  res.send('Hello from MyTasks App connected to MongoDB Atlas!');
                  });

                  // Start server
                  app.listen(port, () => {
                    console.log(`🚀 Server is running at http://localhost:${port}`);
                    });
```

---

[View on CodeChef](https://www.codechef.com/problems/NIPFVX08)