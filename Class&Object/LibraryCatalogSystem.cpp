#include <iostream>
using namespace std;

class Book
{
public:
    string Title;
    string Author;
    string ISBN;

    // Method to add a new book with provided details
    void Add_Book(string new_Title, string new_Author, string new_ISBN)
    {
        Title = new_Title;
        Author = new_Author;
        ISBN = new_ISBN;
    }

    // Method to remove a book by resetting its details
    void Remove_Book()
    {
        Title = "";
        Author = "";
        ISBN = "";
    }
};

class Library
{
public:
    Book books[10]; // Array to store books

    // Method to display books by a specific author
    void Display_books_by_author(string Author)
    {
        for (const auto &Book : books)
        {
            // Check if the book's author matches the provided author and the title is not empty
            if (Book.Author == Author && !Book.Title.empty())
            {
                // Display book details if the conditions are met
                cout << "Title: " << Book.Title << ", Author: " << Book.Author << ", ISBN: " << Book.ISBN << endl;
            }
        }
    }
};

int main()
{
    Library library; // Create a Library object

    Book book1, book2; // Create Book objects
    book1.Add_Book("Show Him Love", "Subhash Chandra Bose", "45yu"); // Add details for book1
    book2.Add_Book("Show Him", "Subhash Chandra", "45"); // Add details for book2

    library.books[0] = book1; // Add book1 to the Library's book collection
    library.books[1] = book2; // Add book2 to the Library's book collection

    library.Display_books_by_author("Subhash Chandra Bose"); // Display books by a specific author

    return 0;
}
