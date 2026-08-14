# POLMDB40

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Task - Team Roster Manager

You have a project document in the `projects_db`. You need to manage the `team` array as follows:

- Add a new member named "Arjun" to the team.
- Add another member named "Sita" to the team.
- Remove "Arjun" from the team because he has been moved to a different project.

 **Step 1: The Initial Addition** 
Target the project `"Alpha-Build"` and use `$push` to add `"Arjun"` to the `team` array. This places him at the  **end of the list**.

 **Step 2: Growing the List** 
Perform another update on the same project using `$push` to add `"Sita"`. The array will now contain  **three members.** 

 **Step 3: The Target Removal** 
Use `$pull` with the value `"Arjun"`. MongoDB will  **search the array**,  **locate**  that specific string, and  **delete it entirely.**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-14T16:50:21.018Z  

```cpp
    { projectName: "Alpha-Build" },
    { $push: { team: "Arjun" } }
);

// STEP 2: Add Sita
db.roster.updateOne(
    { projectName: "Alpha-Build" },
    { $push: { team: "Sita" } }
);

// STEP 3: Remove Arjun
db.roster.updateOne(
    { projectName: "Alpha-Build" },
    { $pull: { team: "Arjun" } }
);

const finalProject = db.roster.findOne({ projectName: "Alpha-Build" });
print("--- Final Team Roster ---");
printjson(finalProject.team);
```

---

[View on CodeChef](https://www.codechef.com/problems/POLMDB40)