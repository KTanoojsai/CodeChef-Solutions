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