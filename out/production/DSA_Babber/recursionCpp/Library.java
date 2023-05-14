import java.util.ArrayList;

class Book {
  private String title;
  private String author;
  private int publicationDate;
  private int availableCopies;

  public Book(
    String title,
    String author,
    int publicationDate,
    int availableCopies
  ) {
    this.title = title;
    this.author = author;
    this.publicationDate = publicationDate;
    this.availableCopies = availableCopies;
  }

  public String getTitle() {
    return title;
  }

  public String getAuthor() {
    return author;
  }

  public int getPublicationDate() {
    return publicationDate;
  }

  public void setAvailableCopies(int availableCopies) {
    this.availableCopies = availableCopies;
  }
}

public class Library {
  public ArrayList<Book> books;

  public Library() {
    this.books = new ArrayList<Book>();
  }

  public void addBook(Book book) {
    this.books.add(book);
  }

  public void removeBook(Book book) {
    this.books.remove(book);
  }

  public ArrayList<Book> getBooks() {
    ArrayList<Book> books = new ArrayList<Book>();
    for (Book book : this.books) {
      books.add(book);
    }
    return books;
  }

  public Book searchBook(String title) {
    for (Book book : books) {
      if (book.getTitle().equals(title)) {
        return book;
      }
    }
    return null;
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    for (Book book : books) {
      sb.append(book.toString()).append("\n");
    }
    return sb.toString();
  }

  public static void main(String[] args) {
    Library library = new Library();
    Book book1 = new Book("The Lord of the Rings", "J.R.R. Tolkien", 1954, 5);
    Book book2 = new Book("The Hobbit", "J.R.R. Tolkien", 1937, 3);
    book1.setAvailableCopies(2);
    Book book3 = new Book("The Silmarillion", "J.R.R. Tolkien", 1977, 1);

    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);
    ArrayList<Book> books = library.getBooks();
    for (Book book : books) {
      System.out.println(book.getTitle());
      System.out.println(book.getAuthor());
      System.out.println(book.getPublicationDate());
    }
    library.removeBook(book2);
    System.out.println("After removing book2");
    for (Book book : library.getBooks()) {
      System.out.println(book.getTitle());
      System.out.println(book.getAuthor());

      System.out.println(book.getPublicationDate());
    }
  }
}
