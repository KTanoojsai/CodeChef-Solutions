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