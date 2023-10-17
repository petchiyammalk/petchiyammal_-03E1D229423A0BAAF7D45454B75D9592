#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the student structure
struct Student {
    char name[50];
    char roll_number[15];
    float cgpa;
};

// Comparison function for qsort to sort students by CGPA in descending order
int compare_students(const void* a, const void* b) {
    struct Student* studentA = (struct Student*)a;
    struct Student* studentB = (struct Student*)b;

    if (studentA->cgpa > studentB->cgpa) {
        return -1; // Higher CGPA comes first
    } else if (studentA->cgpa < studentB->cgpa) {
        return 1; // Lower CGPA comes later
    } else {
        return 0; // CGPA is the same
    }
}

// Function to sort students by CGPA in descending order
void sort_students(struct Student* students, int num_students) {
    qsort(students, num_students, sizeof(struct Student), compare_students);
}

int main() {
    // Create an array of student objects
    struct Student students[] = {
        {"Alice", "A101", 3.75},
        {"Bob", "B102", 3.85},
        {"Charlie", "C103", 3.65},
        {"David", "D104", 3.95},
        {"Eve", "E105", 3.55}
    };

    int num_students = sizeof(students) / sizeof(students[0]);

    // Sort the students by CGPA in descending order
    sort_students(students, num_students);

    // Print the sorted list
    printf("Sorted students by CGPA in descending order:\n");
    for (int i = 0; i < num_students; i++) {
        printf("Name: %s, Roll Number: %s, CGPA: %.2f\n",
               students[i].name, students[i].roll_number, students[i].cgpa);
    }

    return 0;
}
