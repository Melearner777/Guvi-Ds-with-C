/*Operators and Associativity
Problem Statement: Write a program that reads an integer n, followed by n integers, and then applies a complex expression involving multiple operators and parentheses. The expression should be evaluated in a specific order demonstrating operator precedence and associativity.

Description: Define an expression like (((x1 + x2) - x3) * x4 / x5) % x6 and ensure the operators are applied correctly according to their precedence and associativity rules. The program should read the values and compute the result.

Input Format:

The first line contains an integer n, the number of elements.
The next n lines contain one integer each.

Output Format:
Print the result of the complex expression.

Private Testcase Input 1:
6
5
10
3
8
2
7
Private Testcase Output 2:
6*/

#include <stdio.h>

int main() {
    int n;
    
    // Read the number of elements
    scanf("%d", &n);
    
    if (n != 6) {
        printf("Error: The number of elements must be 6.\n");
        return 1;
    }
    
    int values[6];
    
    // Read the elements into the array
    for (int i = 0; i < 6; i++) {
        scanf("%d", &values[i]);
    }
    
    // Define the expression (((x1 + x2) - x3) * x4 / x5) % x6
    int result = (((values[0] + values[1]) - values[2]) * values[3] / values[4]) % values[5];
    
    // Print the result
    printf("%d\n", result);
    
    return 0;
}

