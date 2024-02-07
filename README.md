# Student Record System

## Overview

The Student Record System is a program designed to manage student data for a university. It includes classes to represent students, addresses, and dates, allowing the system to store and manipulate various student information. The program reads student data from a text file, processes it, and generates reports containing detailed and summary information about the students.

## Technologies, Algorithms, and Concepts Used

### Memory Management
- Extensively utilizes the standard C++ heap structure for memory allocation and deallocation.
- Ensures responsible deallocation of dynamically allocated memory to prevent memory leaks.
- Demonstrates the use of `new` and `delete` keywords to allocate and deallocate memory.

### File Handling
- Reads student data from a text file (`students.dat`) using file input stream (`ifstream`).
- Writes reports to separate text files (`fullReport.txt`, `shortReport.txt`, `alphaReport.txt`) using file output streams (`ofstream`).
- Utilizes string manipulation techniques to parse and process data from the input file.

### Sorting Algorithms
- Implements a simple sorting algorithm to alphabetically sort student names for the alphabetical report.
- Utilizes the bubble sort algorithm for sorting the array of student names.

### Object-Oriented Programming
- Demonstrates object-oriented principles by defining classes (`Student`, `Address`, `Date`) to encapsulate related data and behavior.
- Utilizes constructors, destructors, setters, and getters for data encapsulation and abstraction.

### Makefile
- Utilizes a Makefile to automate the compilation process and manage dependencies.
- Includes targets for compiling source files, cleaning up compiled files, running the program, and checking for memory leaks using Valgrind.

### Testing and Debugging
- Tests for memory leaks using Valgrind to ensure proper memory management.
- Implements error handling mechanisms to handle file input/output errors and other potential issues.

### C++98 Standard
- Adheres to the C++98 standard for the base assignment, focusing on core features of the language without relying on advanced features introduced in later standards.

### Git Version Control
- Utilizes Git for version control, enabling collaboration, tracking changes, and managing project history.
- Commits changes incrementally, providing a clear record of modifications and facilitating collaboration with team members.

### Documentation
- Provides comprehensive documentation in the form of comments within source code files (`student.cpp`, `address.cpp`, `date.cpp`, `main.cpp`) and a README.md file.
- Describes the purpose, functionality, and usage instructions for the program to aid understanding and usage by other developers.

## Usage
- Clone the repository to your local machine.
- Compile the program using the provided Makefile.
- Run the compiled executable (`Heapofstudents`).
- View the generated reports (`fullReport.txt`, `shortReport.txt`, `alphaReport.txt`) for student information.