# POLMDB40E

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Task - Newsletter Analytics Manager

You are managing a newsletter in the `marketing_db`. A new user has just clicked the  **"Subscribe"**  button. You need to:

- Increase the subscriberCount by 1.
- Add the user’s interest (e.g., "Technology") to the topics array.
- Constraint: If "Technology" is already in the list, do not add it again.

 **Step 1: Identify the Counter** 
Use the `$inc` operator to handle the math.

- Target: subscriberCount
- Action: Set the value to 1.

MongoDB will take the current number (e.g., `450`) and  **add 1**  to it automatically.

 **Step 2: Identify the Unique Array** 
Use the `$addToSet` operator to handle the list of topics.

- Target: topics
- Action: Set the value to "Technology"

 **Step 3: Combine in One Object** 
Place both operators inside the second argument of your `updateOne` function. Use a  **comma**  to separate the two blocks.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-14T16:52:59.651Z  

```cpp
db = connect('mongodb://localhost:27017/marketing_db');

db.newsletters.insertOne({
    title: "Daily Tech Digest",
    subscriberCount: 450,
    topics: ["Coding", "AI"]
});

db.newsletters.updateOne(
    { title: "Daily Tech Digest" },
    { 
        $inc: { subscriberCount: 1 },
        $addToSet: { topics: "Technology" }
    }
);

const result = db.newsletters.findOne({ title: "Daily Tech Digest" });
print("--- Updated Newsletter Stats ---");
printjson(result);
```

---

[View on CodeChef](https://www.codechef.com/problems/POLMDB40E)