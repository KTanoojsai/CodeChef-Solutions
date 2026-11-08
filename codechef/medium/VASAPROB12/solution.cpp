db.staff.drop();

const employees = [];

for (let i = 1; i <= 5000; i++) {
    employees.push({
            name: "Employee_" + i,
                    empId: 1000 + i,
                            department: "Engineering"
                                });
                                }

                                db.staff.insertMany(employees);

                                // Check performance before indexing
                                const slowSearch = db.staff.find({ empId: 4500 }).explain("executionStats");
                                print("Documents scanned before index: " + slowSearch.executionStats.totalDocsExamined);

                                // Create a Single Field Index on 'empId' in Ascending order
                                db.staff.createIndex({ empId: 1 });

                                // Check performance after indexing
                                const fastSearch = db.staff.find({ empId: 4500 }).explain("executionStats");
                                print("Documents scanned after index: " + fastSearch.executionStats.totalDocsExamined);