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