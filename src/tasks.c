/*
=====================================
   C Programming Practice Tasks
   Author: Your Name
   Description: Collection of beginner 
   programming tasks in C
=====================================
*/

#include <stdio.h>

int main(void) {

    // ---------- TASK 1 ----------
    // Declare variables
    /*
    int a;
    float b;
    char c;
    */

    // ---------- TASK 2 ----------
    // Initialize variables
    /*
    int a = 5;
    float b = 2.5;
    char c = 'H';
    */

    // ---------- TASK 3 ----------
    // Print simple information
    /*
    printf("This is my First program.");
    printf("\nMy name is ABC.");
    printf("\nI am student of Software Engineering.");
    */

    // ---------- TASK 4 ----------
    // Display prompts (without input)
    /*
    printf("Enter your age.");
    printf("\nYour age is...");
    printf("\nEnter your height");
    printf("\nYour height is...");
    printf("\nEnter your weight");
    printf("\nYour weight is...");
    */

    // ---------- TASK 5 ----------
    // Mixed prompts and outputs
    /*
    printf("Enter your age.");
    printf("\nEnter your height");
    printf("\nEnter your weight");

    printf("\n\n\nYour age is...");
    printf("\nYour height is...");
    printf("\nYour weight is...");
    */

    // ---------- TASK 6 ----------
    // Take integer input
    /*
    int a = 0;
    printf("Enter the Integer: ");
    scanf("%d", &a);
    printf("Your Integer is: %d", a);
    */

    // ---------- TASK 7 ----------
    // Take integer and float input
    /*
    int a = 0;
    float b = 0.0;

    printf("Enter the integer: ");
    scanf("%d", &a);
    printf("Your Integer is: %d", a);

    printf("\nEnter the float: ");
    scanf("%f", &b);
    printf("Your Float is: %.2f", b);
    */

    // ---------- TASK 8 ----------
    // Take character input
    char x = 0;
    printf("Enter the Character: ");
    scanf(" %c", &x);   // space before %c to ignore whitespace
    printf("Your Character is: %c", x);

    return 0;
}
