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