# BXCERA03

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Persisting User Preferences
- In this example, we demonstrate how object serialization in Java allows an entire object’s state to be saved to a file and restored later. This is especially useful in applications where user settings or configurations need to persist between sessions.
- We define a simple class UserPreferences that holds the user's selected background color. This class implements the Serializable interface so that it can be written to and read from a file using ObjectOutputStream and ObjectInputStream.
- In the main() method, we first create a UserPreferences object and serialize it to a file named preferences.ser. Then, we deserialize the object from the same file and print the background color to confirm that the data was correctly restored.

 **When executed, the code will show:** 

```
User preferences saved to preferences.ser
User preferences loaded from preferences.ser
Background Color: lightBlue

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-18T17:25:21.123Z  

```cpp
import java.io.*;

class UserPreferences implements Serializable {
    private String backgroundColor;

    public UserPreferences(String backgroundColor) {
        this.backgroundColor = backgroundColor;
    }

    public String getBackgroundColor() {
        return backgroundColor;
    }

    public void setBackgroundColor(String backgroundColor) {
        this.backgroundColor = backgroundColor;
    }

    @Override
    public String toString() {
        return "UserPreferences{backgroundColor='" + backgroundColor + '\'' + '}';
    }
}

class Codechef {
    public static void main(String[] args) {
        UserPreferences prefs = new UserPreferences("lightBlue");

        // Let's save the user preferences to a file
        try {
            FileOutputStream fileOut = new FileOutputStream("preferences.ser");
            ObjectOutputStream objectOut = new ObjectOutputStream(fileOut);
            objectOut.writeObject(prefs);
            System.out.println("User preferences saved to preferences.ser");
            objectOut.close();

        } catch (IOException e) {
            System.out.println("An error occurred while saving user preferences.");
        }

        // Now let's read the preferences back from the file
```

---

[View on CodeChef](https://www.codechef.com/problems/BXCERA03)