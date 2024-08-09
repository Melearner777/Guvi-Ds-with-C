/*Problem Statement:
Write a C program that reads student records from the user and stores them in a structure. The program should also calculate and print the average marks of the students using a pointer to the structure.

Description:
This question tests the ability to use structures to store data and manipulate it using pointers. It requires reading multiple student records, storing them in an array of structures, and using a pointer to calculate the average marks.

Input Format:
First line: an integer n (number of students)
Next n lines: each containing a student's name and marks (space-separated)
Output Format:
First line: average marks of the students

Private Testcase Input 1:
2
David 60
Eva 75
Private Testcase Output 1:
Average Marks: 67.50*/

#include <stdio.h>

// Define the structure to store student data
struct Student {
    char name[50];
    int marks;
};

// Function to calculate the average marks
float calculateAverage(struct Student *students, int n) {
    int totalMarks = 0;
    for (int i = 0; i < n; i++) {
        totalMarks += students[i].marks;
    }
    return (float)totalMarks / n;
}

int main() {
    int n;
    
    // Read the number of students
    scanf("%d", &n);

    // Declare an array of structures to store student data
    struct Student students[n];

    // Read student records
    for (int i = 0; i < n; i++) {
        scanf("%s %d", students[i].name, &students[i].marks);
    }

    // Calculate the average marks using a pointer to the structure
    float average = calculateAverage(students, n);

    // Print the average marks with the label
    printf("Average Marks: %.2f\n", average);

    return 0;
}
