/*Dot (.) Operator in C
Problem Statement:
Write a C program that manages a list of students using structures and the dot (.) operator. The program should allow the user to input the details of multiple students, display these details, and find the student with the highest GPA.

Description:
Define a structure Student that contains the following fields:

name (a string)
age (an integer)
gpa (a float)
The program should:

Read the number of students from the user.
Read the details of each student (name, age, and GPA).
Display the details of all students.
Find and display the details of the student with the highest GPA.
Input Format:

An integer
𝑛
n representing the number of students.
For each student, a string (name), an integer (age), and a float (GPA).
Output Format:

The details of all students.
The details of the student with the highest GPA.

Private Testcase Input 1:
3
Alice 20 3.5
Bob 22 3.9
Charlie 19 3.7
Private Testcase Output 1:
All Students:
Name: Alice, Age: 20, GPA: 3.5
Name: Bob, Age: 22, GPA: 3.9
Name: Charlie, Age: 19, GPA: 3.7

Student with the highest GPA:
Name: Bob, Age: 22, GPA: 3.9*/

#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

// Define the structure Student
struct Student {
    char name[NAME_LENGTH];
    int age;
    float gpa;
};

// Function prototypes
void inputStudentDetails(struct Student* student);
void displayStudentDetails(struct Student student);
struct Student findHighestGPA(struct Student students[], int n);

int main() {
    int n;
    struct Student students[MAX_STUDENTS];

    // Read the number of students
    scanf("%d", &n);

    // Read the details of each student
    for (int i = 0; i < n; i++) {
        inputStudentDetails(&students[i]);
    }

    // Display the details of all students
    printf("All Students:\n");
    for (int i = 0; i < n; i++) {
        displayStudentDetails(students[i]);
    }

    // Find and display the student with the highest GPA
    struct Student topStudent = findHighestGPA(students, n);
    printf("\nStudent with the highest GPA:\n");
    displayStudentDetails(topStudent);

    return 0;
}

// Function to input student details
void inputStudentDetails(struct Student* student) {
    scanf("%s %d %f", student->name, &student->age, &student->gpa);
}

// Function to display student details
void displayStudentDetails(struct Student student) {
    printf("Name: %s, Age: %d, GPA: %.1f\n", student.name, student.age, student.gpa);
}

// Function to find the student with the highest GPA
struct Student findHighestGPA(struct Student students[], int n) {
    struct Student topStudent = students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].gpa > topStudent.gpa) {
            topStudent = students[i];
        }
    }
    return topStudent;
}


