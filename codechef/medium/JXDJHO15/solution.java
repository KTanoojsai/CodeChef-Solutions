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