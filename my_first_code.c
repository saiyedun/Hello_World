// Filename: my_first_code.c
// Description: A simple C program to demonstrate basic syntax, variables, and user input/output
// Author: [soykot]
// Date: [16 April, 2025]

#include <stdio.h>  // Standard Input Output library

int main() {
    // Declare a variable to store user's name
    char name[50];

    // Print a message to the user
    printf("Welcome to C programming!\n");

    // Ask the user to enter their name
    printf("Enter your name: ");
    scanf("%s", name);  // Read user's input (no spaces allowed in scanf with %s)

    // Print a personalized greeting
    printf("Hello, %s! Nice to meet you.\n", name);

    // Return 0 to indicate successful execution
    return 0;
}
