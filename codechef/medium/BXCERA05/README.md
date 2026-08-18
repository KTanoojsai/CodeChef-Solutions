# BXCERA05

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Store and Load a Book object
- In a digital library system, it is essential to preserve information about books - such as their titles and authors - even after the program stops running. To accomplish this, the system uses serialization, a technique in Java that allows objects to be converted into a byte stream and stored in a file.
- In the provided code, a Book class is defined with fields for title and author. Your task is to complete the implementation that serializes a Book object to a file and then deserializes it back into a usable object.

 **Task** 
You are required to complete the following two methods:

- saveBook() method in the SaveBook class: Serializes the given Book object. Writes it to a file with the specified filename. On successful save, print: Book data saved to <filename>
- loadBook() method in the LoadBook class: Reads the serialized data from the specified file. Deserializes it into a Book object. On successful load, print: Book data loaded from <filename> Return the deserialized object.

 **Expected Output:** 

```
Book data saved to book.ser
Book data loaded from book.ser
Book{title='The Lord of the Rings', author='J.R.R. Tolkien'}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-18T17:26:36.056Z  

```cpp
            objectOut.writeObject(book);
            System.out.println("Book data saved to " + filename);
        } catch (IOException e) {
            System.out.println("An error occurred while saving the book object to the file.");
        }
    }
}

class LoadBook {
    public static Book loadBook(String filename) {
        Book book = null;
        try {
            FileInputStream fileIn = new FileInputStream(filename);
            ObjectInputStream objectIn = new ObjectInputStream(fileIn);
            book = (Book) objectIn.readObject();
            System.out.println("Book data loaded from " + filename);
        } catch (IOException | ClassNotFoundException e) {
            System.out.println("An error occurred while loading the book object from the file.");
        }
        return book;
    }
}

class Codechef {
    public static void main(String[] args) {
        Book book = new Book("The Lord of the Rings", "J.R.R. Tolkien");
        String filename = "book.ser";

        SaveBook.saveBook(book, filename);

        Book loadedBook = LoadBook.loadBook(filename);

        System.out.println(loadedBook);
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/BXCERA05)