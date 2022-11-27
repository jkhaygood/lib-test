#include <iostream>
#include <vector>
#include <string>

// Vectors and others
std::vector<std::string> nbook;
std::vector<std::string> nauthor;
std::vector<std::string> user_name;
std::vector<int> user_number;
std::string user;
int u_number{};
std::string name_b;
std::string name_a;

// Create a book
void new_book()
{
    std::cout << "Name of book: ";
    std::getline(std::cin, name_b);
    nbook.push_back(name_b);
    std::cout << std::endl;
    std::cout << "Enter author name: ";
    std::getline(std::cin, name_a);
    nauthor.push_back(name_a);
    std::cout << "Name of book created: " << name_b << std::endl;
    std::cout << "Name of author: " << name_a << std::endl;
}

// Create user
void new_user()
{
    std::cout << "Enter name of user: ";
    std::getline(std::cin, user);
    user_name.push_back(user);
    std::cout << "\nEnter user number: ";
    std::cin >> u_number;
    user_number.push_back(u_number);
    std::cout << "Name of user created: " << user << std::endl;
    std::cout << "Number of the user: " << u_number << std::endl;
}

// View number of users in the system

void user_system()
{
    std::cout << "Number of users in the system: " << user_name.size() << std::endl;
}

// View books in system
void book_system()
{
    std::cout << "Number of books in the system: " << nbook.size() << "\nNumber of authors in the system: " << nauthor.size() << std::endl;
}

// Check book out
void check_out()
{
    std::cout << "Enter the name of the book you wish to check out: " << std::endl;
    std::getline(std::cin, name_b);
    nbook.pop_back();
    std::cout << "Enter your user number: ";
    std::cin >> u_number;
    std::cout << "book checked out" << std::endl;
}

// Check book in
void check_in()
{
    std::cout << "Enter the name of the book you wish tot check in: " << std::endl;
    std::getline(std::cin, name_b);
    nbook.push_back(name_b);
    std::cout << "Enter your user number: ";
    std::cin >> u_number;
}

void main_menu()
{
    std::cout << "********Welcome, main menu********\n";
    std::cout << "1: Check book out:\n";
    std::cout << "2: Check book in:\n";
    std::cout << "3: Admin menu:\n";
    std::cout << "********Thank you come again!*****" << std::endl;
}

void admin_menu()
{
    int admin{};
    std::cout << "********Admin Menu********\n";
    std::cout << "1: Create Book\n";
    std::cout << "2: Create user\n";
    std::cout << "3: Number of books in system\n";
    std::cout << "4: Number of users in system\n";
    std::cout << "5: Back to main menu\n";
    std::cout << "Please select an option!" << std::endl;
    std::cin >> admin;

    switch (admin)
    {
    case 1:
        new_book();
        break;
    case 2:
        new_user();
        break;
    case 3:
        book_system();
        break;
    case 4:
        user_system();
        break;
    }
}

int main()
{
    int menu{};
    main_menu();
    std::cout << "Please select an option: ";
    std::cin >> menu;
    switch (menu)
    {
    case 1:
        check_out();
        break;
    case 2:
        check_in();
        break;
    case 3:
        admin_menu();
        break;
    }

    return 0;
}