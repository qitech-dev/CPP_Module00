# CPP Module 00

Introduction to C++ and object-oriented programming through the first C++ module of the 42 curriculum.

The project is written in **C++98** and compiled with:

```bash
-Wall -Wextra -Werror -std=c++98
```

## Exercises

### ex00 — Megaphone

A small command-line program that converts all arguments to uppercase.

Example:

```bash
./megaphone "hello world"
```

Output:

```text
HELLO WORLD
```

If no argument is provided, the program prints:

```text
* LOUD AND UNBEARABLE FEEDBACK NOISE *
```

Main concepts:

* command-line arguments (`argc`, `argv`)
* character manipulation
* `std::toupper`
* `static_cast`

---

### ex01 — My Awesome PhoneBook

A simple command-line phone book implemented with C++ classes.

The program supports three commands:

```text
ADD
SEARCH
EXIT
```

Each contact stores:

* first name
* last name
* nickname
* phone number
* darkest secret

The phone book can store up to **8 contacts**. Once it is full, adding a new contact replaces the oldest stored contact.

`SEARCH` displays the contacts in a formatted table. Fields longer than 10 characters are truncated and end with a `.`.

Main concepts:

* classes and objects
* constructors
* private and public members
* getters and setters
* `const` member functions
* fixed-size arrays
* formatted output with `std::setw`
* circular indexing

---

### ex02 — The Job Of Your Dreams

Implementation of an `Account` class based on a provided interface and test program.

Each account keeps track of:

* its index
* current balance
* number of deposits
* number of withdrawals

The class also maintains global statistics shared by all accounts:

* number of accounts
* total amount
* total number of deposits
* total number of withdrawals

Operations are logged with timestamps.

Main concepts:

* constructors and destructors
* static class members
* static member functions
* member initializer lists
* object lifetime
* shared class-level state

---

## Compilation

Each exercise contains its own `Makefile`.

```bash
make
```

Clean object files:

```bash
make clean
```

Clean object files and executable:

```bash
make fclean
```

Recompile everything:

```bash
make re
```

## Project Structure

```text
CPP00/
├── ex00/
│   ├── Makefile
│   └── megaphone.cpp
│
├── ex01/
│   ├── Makefile
│   ├── main.cpp
│   ├── Contact.cpp
│   ├── Contact.hpp
│   ├── PhoneBook.cpp
│   └── PhoneBook.hpp
│
└── ex02/
    ├── Makefile
    ├── Account.cpp
    ├── Account.hpp
    └── tests.cpp
```

## What I Learned

This module introduced the transition from C to C++, especially:

* basic C++ syntax and standard I/O
* encapsulation through classes
* constructors and destructors
* member functions and `const`
* static members
* initialization lists
* basic object-oriented design
* writing Makefiles for C++ projects

## Author

**Qi Jin**
