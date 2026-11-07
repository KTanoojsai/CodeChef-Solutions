// Initialize Express app
const app = express();
const port = 3000;

// Connect to MongoDB Atlas
mongoose
    .connect(
            "mongodb+srv://poojitha:pooji@cluster0.ltzmtst.mongodb.net/?appName=Cluster0"
                     )
                               .then( ( )  =>  {
                                             console.log('✅ Connected to MongoDB Atlas');
                                                               // Basic route
                                                                                 app.get('/',  ( req,  res )  =>  {
                                                                                                         res.send('Hello from MyTasks App connected to MongoDB Atlas !');
                                                                                                                                          } );
                                                                                                                                                                               // Start serve r
                                                                                                                                                                                                                    app.listen(port,  ( )  =>  {
                                                                                                                                                                                                                                                                console.log(`🚀 Server is running at  http://localhost:${ port} `);
                                                                                                                                                                                                                                                                                                                     } );
                                                                                                                                                                                                                                                                                                                                                                          
                                                                                                                                                                                                                                                                                                                                                                                } )
                                                                                                                                                                                                                                                                                                                                                                                                                                    .catch( ( err )  =>  {
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               console.error('❌ MongoDB connection error:', err);
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              } );