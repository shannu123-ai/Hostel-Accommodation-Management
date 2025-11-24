#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int room;
};

struct Student hostel[100];
int count = 0;

void addStudent() {
    struct Student s;
    printf("Enter student ID: ");
    scanf("%d", &s.id);
    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Enter room number: ");
    scanf("%d", &s.room);

    hostel[count++] = s;
    printf("Student added successfully!\n");
}

void displayStudents() {
    printf("\n--- Hostel Student List ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Room: %d\n", hostel[i].id, hostel[i].name, hostel[i].room);
    }
}

void searchStudent() {
    int id;
    printf("Enter student ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (hostel[i].id == id) {
            printf("Student Found! Name: %s, Room: %d\n", hostel[i].name, hostel[i].room);
            return;
        }
    }
    printf("Student not found!\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Hostel Accommodation Management ---\n");
        printf("1. Add Student\n2. Display Students\n3. Search Student\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
