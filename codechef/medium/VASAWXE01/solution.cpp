db = connect('mongodb://localhost:27017/college_db');

// --- WRITE YOUR CODE BELOW ---

// TASK 1: Create the 'students' collection
db.createCollection("students");

// TASK 2: Create the 'courses' collection
db.createCollection("courses");

// TASK 3: Drop the 'courses' collection
db.courses.drop();

// TASK 4: Drop the current database.
// Keep this line commented while verifying your collections.
// Uncomment it after verification to remove the database.
db.dropDatabase();

// -----------------------------
print("Current Collections:");
printjson(db.getCollectionNames());
print("\nDatabase operations completed successfully.");