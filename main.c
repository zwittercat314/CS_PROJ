#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "user_database.h"
#include "book_database.h"
// Define constants for maximum values

// Function prototypes
int login(); // Function to handle login
User *verify();
void adminMode();          // Function to handle admin operations
void userMode(int userId); // Function to handle user operations
void addBook();
void deleteBook();
void updateBook();
void acquireBook(int userId);
void returnBook(int userId);
void searchBooks();

// int main()
// {
//     // Initialize your library with some sample books and users
//     // This can be done by loading data from a file or manually entering data

//     int userId = login();
// }

User *verify(char username[USERNAME_SIZE], char password[PASSWORD_SIZE], int current_users)
{

    // printf("Enter your username: ");
    // scanf("%s", &username);
    // printf("Enter your password: ");
    // scanf("%s", &password);

    // use malloc to store data and return the pointer that is created by malloc
    // for (int i = 0; i < current_users; i++)
    // {
    //     FILE *ptr = fopen("credentials.txt", "r");
    //     char str[8000];
    //     fgets(str, 2500, ptr);
    //     char *id = strtok(str, ":");
    //     char *user = strtok(NULL, ":");
    //     char *pass = strtok(NULL, ":");
    //     char *Book_arr = strtok(NULL, ":");
    //     char *Book_num = strtok(NULL, ":");
    //     if (strcmp(username, user) == 0 && strcmp(password, pass) == 0)
    //     {
    //         struct User S1 = {atoi(id), user, pass, atoi(Book_arr), atoi(Book_num)};
    //         fclose(ptr);
    //         return S1;
    //         break;
    //     }
    //     printf("Invalid Credentials!!!!");
    return 0;
    // }
}

int main()
{

    return 0;
}

int login()
{
    return 0;
}

void adminMode()
{
    // Implement admin operations (add, delete, update books)
    // You can use a switch-case menu for these operations
}

void userMode(int userId)
{
    // Implement user operations (acquire and return books)
    // You can use a switch-case menu for these operations
}

void addBook()
{
    // Add a new book to the library
}

void deleteBook()
{
    // Delete a book from the library
}

void updateBook()
{
    // Update book information
}

void acquireBook(int userId)
{
    // Allow a user to borrow a book
}

void returnBook(int userId)
{
    // Allow a user to return a book
}

void searchBooks()
{
    // Implement book search functionality
}
