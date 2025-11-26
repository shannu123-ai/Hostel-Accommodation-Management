# Hostel Accommodation Management System

## Introduction

The Hostel Accommodation Management System is a basic console-based application written in C to manage students staying in a hostel. It allows the user to add student records, view the list of all students, and search for a student using their ID.

## Purpose

The main aim of this project is to practice core C programming concepts such as structures, arrays, functions, and menu-driven programs using a real-life example of hostel room allocation. It provides a simple starting point for understanding how data about students and rooms can be organized in memory.

## Features

### Add Student

Stores a new student's ID, name, and room number in an in-memory list and confirms successful addition.

### Display Students

Prints all stored student records in a readable format, including ID, name, and room number.

### Search Student

Lets the user search for a student by ID and shows the corresponding name and room if found; otherwise displays a "not found" message.

### Exit

Closes the program from the main menu safely.

## Implementation Details

### Data Structure

- Uses a `struct Student` with the following fields:
  - `int id` – unique student ID
  - `char name[50]` – student name
  - `int room` – allocated room number
  
- An array `hostel[100]` stores up to 100 student records, and a global `count` variable tracks how many students are currently stored.

### Core Functions

- `addStudent()` – Reads student ID, name, and room from the user and appends the record to the `hostel` array.
- `displayStudents()` – Loops through all stored records and prints each student's details.
- `searchStudent()` – Searches for a student by ID and displays their name and room if found.
- `main()` – Implements an infinite loop with a menu to call the appropriate function based on the user's choice.

**Note:** This version stores all data in memory only and does not use files, so data is lost when the program exits.

## How to Compile and Run

1. Save the program as `Hostel-Accomodation-Mnagement.c`.

2. Compile with a C compiler such as GCC:
   ```bash
   gcc Hostel-Accomodation-Mnagement.c -o hostel_management
   ```

3. Run the executable:
   ```bash
   ./hostel_management
   ```

4. Use the menu to:
   - Add new students
   - Display the list of students
   - Search for a student by ID
   - Exit the program

## Sample Menu

```text
--- Hostel Accommodation Management ---
1. Add Student
2. Display Students
3. Search Student
4. Exit
Enter your choice:
```

## Sample Data Structure

```c
struct Student {
    int id;           // Unique student identifier
    char name[50];    // Student full name
    int room;         // Hostel room number
};
```

## Program Flow

1. Initialize an empty array to store student records
2. Display main menu with 4 options
3. Process user choice:
   - **Option 1:** Accept student ID, name, room → store in array
   - **Option 2:** Loop through array → display all students
   - **Option 3:** Accept student ID → search and display details
   - **Option 4:** Exit program
4. Loop until user exits

## Limitations & Future Enhancements

**Current Limitations:**
- Data is stored in memory only (not persistent)
- Maximum 100 students can be stored
- No update or delete functionality
- No duplicate ID checking

**Possible Extensions:**
- Add file I/O for persistent storage
- Implement update functionality to modify student details
- Add delete functionality with confirmation
- Check for duplicate IDs before adding
- Generate hostel reports (occupancy rate, student list by room)
- Add room availability management
- Create fee tracking system

## Conclusion

This mini-project demonstrates how structures and arrays in C can be used to build a simple hostel management tool. It is suitable for an introductory programming course and can be extended later with features such as file storage, update/delete operations, and validation for duplicate IDs.

## Author

*ITP Project*  
*SAI University, Chennai*

---