# BXCERA15C

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Loading a To-Do List
- In this worked example, we demonstrate how to restore saved task data by reading from a file using Java's File I/O capabilities.
- The ToDoList class maintains a list of tasks using an ArrayList<String>. When a ToDoList object is created, it automatically loads any existing tasks from a file named todos.txt using the loadTasks() method. The tasks are then displayed using the printTasks() method. This example focuses on reading object data from a plain text file.

 **Function Breakdown:** 

- ToDoList() constructor: Initializes the list and immediately attempts to load tasks from todos.txt.
- loadTasks(): Opens the file and reads each line into the internal list of tasks using a Scanner.
- printTasks(): Displays all loaded tasks in a formatted list.

In the `main()` Method:

- A ToDoList object is created.
- As part of initialization, it attempts to load any tasks previously saved in the todos.txt file.
- The loaded tasks are then printed to the console.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-18T17:22:09.801Z  

```cpp
import java.io.*;
import java.util.ArrayList;
import java.util.Scanner;

class ToDoList {

    private ArrayList<String> tasks;
    private static final String FILE_NAME = "todos.txt";

    public ToDoList() {
        tasks = new ArrayList<>();
        loadTasks();
    }

    public void addTask(String task) {
        tasks.add(task);
    }

    public void loadTasks() {
        try{
            File file = new File(FILE_NAME);
            Scanner scanner = new Scanner(file);
            while (scanner.hasNextLine()) {
                tasks.add(scanner.nextLine());
            }
            scanner.close();
        } catch (Exception e) {
            System.out.println("No existing to-do list found.");
        }
    }

    public void printTasks() {
        if (tasks.isEmpty()) {
            System.out.println("Your to-do list is empty.");
        } else {
            System.out.println("To-Do List:");
            for (int i = 0; i < tasks.size(); i++) {
                System.out.println((i + 1) + ". " + tasks.get(i));
            }
        }
```

---

[View on CodeChef](https://www.codechef.com/problems/BXCERA15C)