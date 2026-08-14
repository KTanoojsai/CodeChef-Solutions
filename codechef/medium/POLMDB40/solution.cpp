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