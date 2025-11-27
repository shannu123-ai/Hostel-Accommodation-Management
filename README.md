# Hostel Accommodation Management in C

## Overview
This project implements a simple Hostel Accommodation Management System using the C programming language. It allows the warden or administrator to add hostel students, display the full list, and search for a student by ID through a menu-driven console interface. [attached_file:file:11]

## Objectives
- Practice defining and using struct types in C.
- Store multiple records in a global array and access them by index.
- Build a menu-driven application using loops and switch statements.
- Implement basic search functionality on a collection of records. [attached_file:file:11]

## Features
- Add a new hostel student with ID, name, and room number.
- Display all stored student records in a formatted list.
- Search for a student by ID and show their details if found.
- Exit cleanly from the application using the menu. [attached_file:file:11]

## Data Model
The system uses a struct Student to represent each hostel resident:

- id – unique student ID (integer)  
- name – student name (character array of size 50)  
- room – room number allocated to the student (integer)  

All records are stored in a global array hostel[100] with an integer count to track how many students have been added so far. [attached_file:file:11]

## Main Components

### addStudent()
- Prompts the user for student ID, name, and room number.
- Stores the details in a temporary struct Student variable.
- Copies that struct into hostel[count] and increments count.
- Prints “Student added successfully!” after insertion. [attached_file:file:11]

### displayStudents()
- Prints a header --- Hostel Student List ---.
- Iterates from index 0 to count - 1 and prints the ID, name, and room of each student. [attached_file:file:11]

### searchStudent()
- Asks the user to enter a student ID to search.
- Scans the hostel array linearly.
- If a record with matching ID is found, prints “Student Found!” along with the student’s name and room number and returns.
- If no match is found, prints “Student not found!”. [attached_file:file:11]

### main()
- Repeatedly displays the menu:

  1. Add Student  
  2. Display Students  
  3. Search Student  
  4. Exit  

- Reads the user’s choice and calls addStudent, displayStudents, or searchStudent as appropriate.
- Exits the program when option 4 is chosen; otherwise keeps looping and accepting operations. [attached_file:file:11]

## Limitations and Assumptions
- A maximum of 100 students can be stored because the array size is fixed at 100.
- Data is stored only in memory; once the program is closed, all records are lost (no file handling yet).
- No duplicate‐ID check is performed, so the user must manually avoid repeating IDs. [attached_file:file:11]

## How to Compile and Run

1. Save the source code as Hostel-Accomodation-Mnagement-1.c.
2. Open a terminal in the project folder and compile:

## Conclusion

This mini-project demonstrates how structures and arrays in C can be used to build a simple hostel management tool. It is suitable for an introductory programming course and can be extended later with features such as file storage, update/delete operations, and validation for duplicate IDs.

## Author
Kesamsetty. Shanmukha Lakshmi

*ITP Project*  
*SAI University, Chennai*

---
