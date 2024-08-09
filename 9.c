/*C typedef
Problem Statement:
Develop a C program that uses typedef to create an alias for a structure representing a complex number. The program should perform addition and subtraction of two complex numbers provided by the user.

Description:
Define a structure for a complex number with real and imaginary parts. Use typedef to create an alias for this structure. The program should read two complex numbers from the user, perform addition and subtraction, and display the results.

Input Format:

Four floating-point numbers representing the real and imaginary parts of two complex numbers.
Output Format:

The result of the addition and subtraction of the two complex numbers.

Private Testcase Input 1:
1.0 2.0 3.0 4.0
Private Testcase Output 1:
Addition: 4.0 + 6.0i
Subtraction: -2.0 - 2.0i*/

#include <stdio.h>

// Define a structure for a complex number
typedef struct {
    float real;
    float imag;
} Complex;

// Function to add two complex numbers
Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers
Complex subtractComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

// Function to print a complex number
void printComplex(Complex c, char sign) {
    printf("%.1f %c %.1fi", c.real, sign, c.imag);
}

int main() {
    Complex c1, c2, sum, difference;

    // Read two complex numbers from the user
    scanf("%f %f %f %f", &c1.real, &c1.imag, &c2.real, &c2.imag);

    // Perform addition and subtraction
    sum = addComplex(c1, c2);
    difference = subtractComplex(c1, c2);

    // Display the results
    printf("Addition: ");
    printComplex(sum, '+');
    printf("\nSubtraction: ");
    printComplex(difference, '-');

    return 0;
}
