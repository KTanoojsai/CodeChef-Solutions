# JXDJHO15

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Display Book Information
- Let's practice implementing the toString() method with another practical example.
- In this scenario, you are working with a Book class that stores three pieces of information about a book: its title, author, and year of publication. By default, printing a Book object will call the toString() method from Java's Object class, which provides a non-informative string like Book@15db9742.

 **Task** 

- Take input from the user for the book's name, author, and year of publication.
- Implement the toString() method in the Book class so that it returns a meaningful string representation of the book.
### Sample 1:
Input
Output

```
Atomic Habits
James Clear
2018
```

```
Book[title=Atomic Habits, author=James Clear, year=2018]
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-18T17:20:26.677Z  

```java
import java.util.Scanner;

class Book {
    String title;
    String author;
    int year;

    public Book(String title, String author, int year) {
        this.title = title;
        this.author = author;
        this.year = year;
    }

    @Override
    public String toString() {
        return "Book[" +
                "title=" + title +
                ", author=" + author +
                ", year=" + year +
                "]";
    }

}

class Codechef {
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);

        String title = scanner.nextLine();
        
        String author = scanner.nextLine();
        
        int year = scanner.nextInt();

        Book book1 = new Book(title, author, year);

        System.out.println(book1); 

        scanner.close();
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/JXDJHO15)