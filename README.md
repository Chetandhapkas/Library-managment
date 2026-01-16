Library Management System in C
Overview

This is a simple Library Management System implemented in C. It allows the user to insert, view, search, and delete books from a library collection. This project is suitable for beginners who want to learn basic C programming concepts like arrays, structures, functions, and simple console input/output.

Features

Insert Books: Add new books to the library, including ID, Title, and Author.

View Books: Display the list of all available books in the library.

Search Books: Find a book by its ID.

Delete Books: Remove a book from the library by marking it as deleted.

Console-based Menu: User-friendly menu interface to perform different operations.

Technology

Programming Language: C

Compiler: Turbo C / GCC

Libraries Used: stdio.h, conio.h, stdlib.h

Data Structure

The program uses a structure to store book details:

struct Book {
    int id;
    char title[40];
    char author[40];
    int isdeleted;
};


id → Unique identifier for the book

title → Name of the book

author → Author of the book

isdeleted → Flag to mark deleted books (0 = available, 1 = deleted)

All books are stored in an array:

struct Book booklist[100];


Maximum 100 books can be stored.

How to Run

Open the project in a C compiler (Turbo C, Dev C++, or GCC).

Compile the code.

Run the executable.

Follow the on-screen menu to Insert, View, Search, or Delete books.

Continue performing operations until you choose to exit.

Usage Example
1 -> Insert Book
2 -> View Books
3 -> Search Book
4 -> Delete Book
Enter your choice: 1


Add book details: ID, Title, Author

Book is added successfully

Repeat for multiple books

Limitations

Maximum of 100 books can be stored.

Uses console input/output only (no file handling).

Book deletion only marks the book as deleted; it is not physically removed from memory.

gets() function is used, which may cause buffer overflow in large inputs.

Future Improvements

Implement file handling to store data permanently.

Replace gets() with fgets() for safer input.

Add more features like updating book details, sorting books, and handling multiple copies.

Add a GUI for better user experience.

Author

Chetan Dhapkas
Engineering Student | Library Management System Project
