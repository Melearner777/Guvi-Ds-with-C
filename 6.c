/*Properties of Arrays in C
Problem Statement:
Write a C program to demonstrate the effect of modifying array elements within a function using both direct indexing and pointer arithmetic. The twist is to use the same function to modify the array elements in both ways and show the difference.

Description:

The program should define an array and pass it to a function.
The function should modify the array elements using direct indexing for the first half and pointer arithmetic for the second half.
Display the array before and after modification.
Input Format:

The user inputs the number of elements followed by the elements themselves.
Output Format:

The array before and after modification.

Private Testcase Input 1:
5
7 14 21 28 35
Private Testcase Output 1:
Original array: 7 14 21 28 35
Modified array: 14 28 42 56 70*/

#include <stdio.h>

void modifyArray(int *arr, int n) {
    for (int i = 0; i < n / 2; i++) {
        arr[i] *= 2;
    }

    for (int i = n / 2; i < n; i++) {
        *(arr + i) *= 2;
    }
}

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
    //717580
    modifyArray(arr, n);

    printf("Modified array: ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
